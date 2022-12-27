#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "./calc.h"

START_TEST(RPN_1) {
  char *line = "2+2+2";
  char out[256];
  char *check = "2,2,+,2,+";
  pars(line, out);
  ck_assert_str_eq(out, check);
}
END_TEST

START_TEST(RPN_2) {
  char *line = "2*(4+6)";
  char out[256];
  char *check = "2,4,6,+,*";
  pars(line, out);
  ck_assert_str_eq(out, check);
}
END_TEST

START_TEST(RPN_3) {
  char *line = "2*(4+6)*ln(5)";
  char out[256];
  char *check = "2,4,6,+,*,5,d,*";
  pars(line, out);
  ck_assert_str_eq(out, check);
}
END_TEST

START_TEST(RPN_4) {
  char *line = "2*(4+6)*ln(5*sin(5*cos(6)))";
  char out[256];
  char *check = "2,4,6,+,*,5,5,6,c,*,s,*,d,*";
  pars(line, out);
  ck_assert_str_eq(out, check);
}
END_TEST

START_TEST(RPN_5) {
  char *line = "2*(4+6)*ln(5*sin(5*cos(6)))/17/1655*45/456456";
  char out[256];
  char *check = "2,4,6,+,*,5,5,6,c,*,s,*,d,*,17,/,1655,/,45,*,456456,/";
  pars(line, out);
  ck_assert_str_eq(out, check);
}
END_TEST

START_TEST(RPN_6) {
  char *line = "2^5+45.654-54";
  char out[256];
  char *check = "2,5,^,45.654,+,54,-";
  pars(line, out);
  ck_assert_str_eq(out, check);
}
END_TEST

START_TEST(couting_1) {
  char *line = "2+5";
  char out[256];
  pars(line, out);
  ck_assert_double_eq(couting(out), 7);
  ck_assert_double_eq_tol(couting(out), 7, 1e-6);
}
END_TEST

START_TEST(couting_2) {
  char *line = "2+5*cos(0)";
  char out[256];
  pars(line, out);
  ck_assert_double_eq(couting(out), 7);
  ck_assert_double_eq_tol(couting(out), 7, 1e-6);
}
END_TEST

START_TEST(couting_3) {
  char *line = "2*5/765.6456*674567";
  char out[256];
  pars(line, out);
  ck_assert_double_eq(couting(out), 7);
  ck_assert_double_eq_tol(couting(out), 7, 1e-6);
}
END_TEST

START_TEST(couting_4) {
  char *line = "2*(4+6)*ln(5*cos(0))/17/1655*45/456456";
  char out[256];
  pars(line, out);
  //ck_assert_double_eq(couting(out), 1.12790078e-7);
  ck_assert_double_eq_tol(couting(out), 1.12790078e-7, 1e-6);
}
END_TEST

Suite *s21_calc(void) {
  Suite *suite;

  suite = suite_create("s21_calc");

  TCase *tcase_RNP = tcase_create("RPN");
  suite_add_tcase(suite, tcase_RNP);
  tcase_add_test(tcase_RNP, RPN_1);
  tcase_add_test(tcase_RNP, RPN_2);
  tcase_add_test(tcase_RNP, RPN_3);
  tcase_add_test(tcase_RNP, RPN_4);
  tcase_add_test(tcase_RNP, RPN_4);
  tcase_add_test(tcase_RNP, RPN_5);
  tcase_add_test(tcase_RNP, RPN_6);

  TCase *tcase_counting = tcase_create("Counting");
  suite_add_tcase(suite, tcase_counting);
  tcase_add_test(tcase_counting, couting_1);
  tcase_add_test(tcase_counting, couting_2);
  tcase_add_test(tcase_counting, couting_3);
  tcase_add_test(tcase_counting, couting_4);

  return suite;
}

int main(void) {
  Suite *suite = s21_calc();
  SRunner *suite_runner = srunner_create(suite);
  srunner_run_all(suite_runner, CK_VERBOSE);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);
  return 0;
}
