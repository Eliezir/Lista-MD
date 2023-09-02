/* 4º Escrever um programa para determinar o mdc e o mmc de dois inteiros com base
em seus fatores primos.*/

#include <stdio.h>

int mmc(int a, int b, int counter, int resultado) {
  if (a == 1 && b == 1) {
    printf("MMC: %i\n", resultado);
    return 0;
  }

  int newCounter = counter, multiResult = 1;

  if (a % counter == 0) {
    a = a / counter;
    
    newCounter = 1;
    multiResult = counter;
  }

  if (b % counter == 0) {
    b = b / counter;
    
    newCounter = 1;
    multiResult = counter;
  }

  return mmc(a, b, newCounter + 1, resultado * multiResult);
}

int mdc(int a, int b, int counter, int resultado) {
  if (counter > a || counter > b) {
    printf("MDC: %i\n", resultado);
    return 0;
  }
  
  if (a % counter == 0 && b % counter == 0) {
    return mdc(a / counter, b / counter, 2, resultado * counter);
  }

  return mdc(a, b, counter + 1, resultado);
}

int main() {
  int a, b;

  scanf("%i %i", &a, &b);
  mdc(a, b, 2, 1);
  mmc(a, b, 2, 1);
  
  return 0;
}
