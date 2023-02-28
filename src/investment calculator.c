#include <math.h>

enum Periodicity {
  end_of_term = 1,
  every_day = 365,
  every_week = 7,
  one_time_month = 12,
  two_time_month = 6,
  once_time_quarter = 4,
  one_time_4month = 3,
  one_time_half_a_year = 2,
  one_time_year = 1,
};
void investment_calculator(long double summ, unsigned term, unsigned count_term,
                           double proc, double tax, int interest_capitalization,
                           long double deposit_replenishment,
                           long double deposit_withdrawal);
int main() { return 0; }
// summ сумма вклада
// term переодичность
// count_term срок вклада выраженое в переодичности
// proc процент на вклад
// tax налог
// interest_capitalization флаг капитализации
// deposit_replenishment пополнения
// deposit_withdrawal выплат
void investment_calculator(long double summ, unsigned term, unsigned count_term,
                           double proc, double tax, int interest_capitalization,
                           long double deposit_replenishment,
                           long double deposit_withdrawal) {
  long double buff_summ = 0;
  long double curr_proc = proc / 100;

  if (interest_capitalization)
    buff_summ = summ * pow(1 + curr_proc / term, count_term);
}