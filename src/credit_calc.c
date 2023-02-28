#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int credit_calc(long double summ, double proc, unsigned munth, int type);

int main(void) {
  credit_calc(1e6, 20, 36, 1);
  return 0;
}

int get_days(int month) {
  int days = 28 + ((0x3bbecc >> (month * 2)) & 3);
  return days;
}

int credit_calc(long double summ, double proc, unsigned munth, int type) {
  long double all_summ = 0;
  long double overpayment = 0;

  if (type == 1) {
    //аннутедный платеж
    long double munth_pay = 0;
    double munth_proc = (double)proc / (12 * 100);

    munth_pay =
        (summ * munth_proc) / (1 - (pow(1 + munth_proc, -(long double)munth)));

    all_summ = munth_pay * munth;
    overpayment = all_summ - summ;

    for (unsigned j = 0; j < munth; ++j)
      printf("| munth = %3u | pay = %12Lf | dem = %16Lf |\n", j + 1, munth_pay,
             all_summ - munth_pay * (j + 1));

    printf("%Lf\n", overpayment);
  } else {
    // диффиринцированый с учетом кол-ва дней в месяце (без учета высокостного
    // года)
    long double list_of_pay[munth];
    long double pay_bases = summ / munth;
    time_t t;
    struct tm *info;
    time(&t);
    info = localtime(&t);
    int now_month = info->tm_mon + 1;
    for (unsigned j = 0; j < munth; ++j) {
      list_of_pay[j] = (summ - pay_bases * j) * proc / 100 *
                       get_days((now_month + j) % 12) / 365;
      all_summ += list_of_pay[j];
    }
    all_summ += pay_bases * munth;

    for (unsigned j = 0; j < munth; ++j)
      printf("| munth = %3u | pay_bases = %12Lf | pay_proc = %16Lf |\n", j + 1,
             pay_bases, list_of_pay[j]);

    printf("  all_summ = %Lf, overpayment = %Lf\n", all_summ, all_summ - summ);
  }
  return 0;
}
