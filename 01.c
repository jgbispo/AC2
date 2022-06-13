#include <stdio.h>

double scanfVerifyDouble(char valueText) {
  double value;
  printf("Insira valor de '%c': ", valueText);
	scanf("%lf", &value);
  if (value <= 0) {
    printf("Valor invalido");
    return 0;
  } else {
    return value;
  }
}

int main(void) {
  double a, b, c;

  a = scanfVerifyDouble('a');
  b = scanfVerifyDouble('b');
  c = scanfVerifyDouble('c');

	printf("Resultado de d(x): %.3lf", (a * c) + b);
}