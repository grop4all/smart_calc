

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

#define macr(func, args) (func(args))
int main() {
  float num = macr(sin, PI / 2);
  float num1 = sin(PI / 2);
  printf("%f, %f", num, num1);
}