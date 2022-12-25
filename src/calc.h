#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


#define MaxLemmaLen 7

typedef struct func {
    char* func_name;
    char short_name;

} t_func;

int pars(char *line, char *out);

t_func set_func[] = {
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
    OUT_OF_MEMORY,
};

