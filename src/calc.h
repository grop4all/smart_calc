#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "./Node.h"
#include "./stack.h"

#define MaxLemmaLen 7

typedef struct func {
    char* func_name;
    char short_name;

} t_func;

int pars(char *line, char *out);
int preor_oper(char oper);
char check_func(char *line);
double couting(char *line);

t_func set_funcution[] = {
    {"cos", 'c',},
    {"sin", 's'},
    {"tan", 't'},
    {"acos",'a'},
    {"asin", 'b'},
    {"atan", 'i'},
    {"ln", 'd'},
    // "sqrt",
    // "log",
    {NULL, 0}
};

enum set_error {
    OK,
    link_null,
};

