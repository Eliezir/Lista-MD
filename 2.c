/* Escrever um programa para listar números primos sequencialmente. Você deve
otimizar o programa para que ele liste o maior número possível de primos em 60
segundos. */

#include <stdio.h>
#include <time.h>
int ehPrimo(int num){
  if (num % 3 == 0) {
        return 0;
    }
    for( int contador = 5; contador * contador <= num; contador += 6){
        if(num % contador == 0 || num % (contador + 2) == 0){
            return 0;
        }
    }
    return 1;
}

int main(void) {
  time_t endwait;
  time_t start = time(NULL);
  int num = 3;
  endwait = start + 1;
  printf("2\n3\n");
  for(;time(NULL) < endwait; num += 2){

    if(ehPrimo(num) == 1){
      printf("%d\n", num);
    }
  }
  return 0;
}
