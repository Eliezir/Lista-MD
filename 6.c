/*
6. Escrever um programa para encontrar os coeficientes s e t da combinação linear
mdc(a, b) = s · a + t · b.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

    printf("Digite os valores (a e b) separados por um espaço\n");
    int a, b;
    scanf("%d %d", &a, &b);
   
    //Reodernando de forma Decrescente 
    if (b>a){
        int aux = b;
        b = a;
        a = aux;
    }

    int A = a, B = b; 
    
    //Definindo os Arrays Necessários
    int quotient[100] = {}, values[100] = {};
    

    //Determinando o mdc entre a e b
    int i = 0;
    int rest;
    while (a%b != 0)
    {   
        quotient[i] = a/b;
        rest = a%b;
        a = b; 
        b = rest;
        i++;
        //printf("Valor de i é: %d\n", i);
    }
    
  
    if(b != 1){
        printf("%d e %d não são primos entre si.\nPois possuem mdc igual a %d.\nLogo não possui solução!\n", A,B,b);
    }
    
    int length = i ; 
    
    
    for (int i = length - 1; i >= 0; i--)
    {
       if( i == length -1){
            values[i] = quotient[i] * 1; 
       } else if (i == length - 2){
            values[i] = quotient[i]*values[i+1] + 1;
       } else {
            values[i] = quotient[i]*values[i+1] + values[i+2];
       }
    }
    
    //printf(" %d", values[0]);
    //printf(" %d", values[1]);
    //printf(" %d", values[2]);


    if(i % 2 == 0){
        values[1] = -values[1];
    } else {
        values[0] = -values[0];
    }
    int s = values[length-3], t = values[1];
    //printf("%d\n%d", values[length -2], values[length -1]);
    
    
    printf("################  -  RESULTADOS  -  ################\n\n");   
    if(abs(s) > abs(t)){
        printf("     ## mdc(%d, %d) = (%d) . %d + (%d) . %d\n",A, B, t, A, s, B);
    } else {
        printf("     ## mdc(%d, %d) = (%d) . %d + (%d) . %d\n",A, B, s, A, t, B);
    }

    printf("\n\n     ## s = %d", s);
    printf(" | t = %d\n\n", t);




    return 0;
}