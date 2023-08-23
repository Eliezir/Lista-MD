/* 5º Escrever um programa para determinar o mdc de dois números com base no Al-
goritmo de Euclides. */

#include <stdio.h>

int mdc(int num1, int num2){
    int menor = num2, maior = num1;
    if(num2 > num1){
        menor = num1;
        maior = num2;
    }
    if(maior%menor == 0){
        return menor;
    }
    else{
        int R = maior%menor;
        return mdc(menor, R);   
    }
}


int main(){
    int  num1,num2, output;
    scanf("%d %d", &num1, &num2);
    output = mdc(num1,num2);
    printf("MDC(%d,%d) = %d\n",num1,num2,output);
    return 0;
}