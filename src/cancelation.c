#include <stdio.h>

int main() {
  float f1 = 2.0E-10;
  float f2 = 2.0E10;

  printf("f1 = %.30f\n", f1);
  printf("f2 = %f\n", f2);
  printf("f2 + f1 - f2 = %.30f\n", f2 + f1 - f2);
  printf("f2 - f2 + f1 = %.30f\n", f2 - f2 + f1);

  return 0;
}
