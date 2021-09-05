#include <math.h>
#include <stdio.h>

#define type_name(expr)                                                        \
  (_Generic((expr), \
              char: "char", unsigned char: "unsigned char", signed char: "signed char", \
              short: "short", unsigned short: "unsigned short", \
              int: "int", unsigned int: "unsigned int", \
              long: "long", unsigned long: "unsigned long", \
              long long: "long long", unsigned long long: "unsigned long long", \
              float: "float", \
              double: "double", \
              long double: "long double", \
              void*: "void*", \
              default: "?"))

int main() {
  float nan = NAN;
  printf("Typeof NaN is %s\n", type_name(nan));
  return 0;
}
