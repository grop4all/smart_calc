#include <check.h>

#include <stdio.h>
#include <stdlib.h>

#include "calc.h"

START_TEST(RPN_1) {
    char *line = "2+2+2";
    char *out = malloc(256);
    char *check="2,2,2,+,+";
    pars(line,out);
    ck_assert_str_eq(out, check);
}
END_TEST





Suite *s21_calc(void) {
  Suite *suite;

  suite = suite_create("s21_calc");
  TCase *tcase_core = tcase_create("Core");

  tcase_add_test(tcase_core,RPN_1);

  return suite;
}




int main(void) {
  Suite *suite = s21_calc();
  SRunner *suite_runner = srunner_create(suite);
  srunner_run_all(suite_runner, CK_VERBOSE);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);
  return (failed_count / srunner_ntests_run(suite_runner) <= 20) ? EXIT_SUCCESS
                                                                 : EXIT_FAILURE;
}
