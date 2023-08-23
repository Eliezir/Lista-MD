// 3º Escrever um programa para decompor um determinado número inteiro em seus
// fatores primos.

#include <stdio.h>

int ehPrimo(int x, int contador) {
  if (x == contador) {
    return x;
  } else if (x % contador == 0 || x < 2) {
    return 0;
  } else {
    if (contador == 2)
      contador -= 1;
    return (ehPrimo(x, contador + 2));
  }
}

int decomporEmPrimos(int num){
int primo;
for(int i = 2; i <= num; i+=1){
    primo = ehPrimo(i, 2);
    if(primo != 0){
        if(num % primo == 0){
            printf("%d / %d = %d\n", num, primo, num/primo);
            return decomporEmPrimos(num/primo);
        }
    }
}

}

int main(){
    int num;
    scanf("%d", &num);
    decomporEmPrimos(num);
}