#include <stdio.h>

void calcValue(float dist, float value1, float value2) {
	float result = (dist * value1) + value2;
  printf("Valor estimado: R$ %.2f", result);
}

void subMenu(int option) {
  float dist;
  printf("Insira a distancia: ");
  scanf("%f", &dist);
  switch (option) {
  case 1:
    calcValue(dist, 1.00, 2.00);
    break;
  case 2:
    calcValue(dist, 1.50, 3.00);
    break;
  case 3:
    calcValue(dist, 2.50, 5.0);
    break;
  case 4:
    calcValue(dist, 5.0, 10.0);
    break;
  }
}

void menu() {
  int cat;
  printf("Informe a categoria do veículo: \n");
  printf("1 - Compartilhado\n2 - Padrão\n3 - Confort\n4 - Executivo: \n> ");
  scanf("%d", &cat);
	subMenu(cat);
}

int main(void) {
  menu();
  return 0;
}