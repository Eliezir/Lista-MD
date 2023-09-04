/*
10. Generalize o programa da questão anterior para funcionar com n congruências ao
invés de somente 3, onde n será dado pelo usuário.
*/

#include <stdio.h>

// Função que calcula o MDC usando o Algoritmo de Euclides
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função que verifica se dois números são coprimos (MDC igual a 1)
int areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

// Função que verifica se todos os valores de mArray são coprimos entre si
int areAllCoprime(int mArray[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!areCoprime(mArray[i], mArray[j])) {
                return 0; // Não são coprimos
            }
        }
    }
    return 1; // Todos são coprimos
}

// Função que calcula o inverso multiplicativo de 'a' mod 'm'
int inverse(int a, int m){
    int i = 1;

    while ((i*a)%m != 1)
    {
        i++;
    }

    return i;
    
}




int read(int n){
    int bArray[100] = {};
    int mArray[100] = {};
    int aArray[100] = {};
    int sArray[100] = {};

    int M = 1, x = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &bArray[i], &mArray[i]);
        M *= mArray[i];
    }

    if(areAllCoprime(mArray,n)==0){
        printf("os números digitados não são coprimos!\n");
        return -3;
    }else{
        for (int i = 0; i < n; i++)
    {
        aArray[i] = M/mArray[i];
        sArray[i] = inverse(aArray[i], mArray[i]);
    }

    for (int i = 0; i < n; i++)
    {
        x += aArray[i]*bArray[i]*sArray[i];
    }

    return x%M;
    }
    
    
    
    
   
}


int main(){
    int n;
    scanf("%d", &n);

    int x = read(n);
    if(x==-3){
        return 0;
    }
    printf("X = %d", x);

    return 0;
}
