#ifndef CALC_H
#define CALC_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./Node.h"
#include "./stack.h"

typedef struct func {
  char *func_name;
  char short_name;
} t_func;

double calc(char*line);
int pars(char *line, char *out);
int preor_oper(char oper);
char check_func(char *line, int *);
double counting(char *line);
char* prerefactor(char *line, char * out);

enum set_error {
  OK,
  link_null,
};

#endif // CALC_H
