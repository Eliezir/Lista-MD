
/*Escrever um programa que determina se um dado número inteiro é primo ou não. */

#include <stdio.h>
int ehPrimo(int x, int contador) {
  if (x == contador) {
    return 1;
  } else if (x % contador == 0 || x < 2) {
    return 0;
  } else {
    if (contador == 2)
      contador -= 1;
    return (ehPrimo(x, contador + 2));
  }
}
int main() {
  int num;
  scanf("%d",&num);
  printf("O número %d %s\n", num, !ehPrimo(num, 2) ? "é primo" : "não é Primo");
  return 0;
} 
