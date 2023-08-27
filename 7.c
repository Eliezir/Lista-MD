#include <stdio.h>
#include <stdlib.h>

int main(){
    int b, a, i; 
    printf("---------------------------------------------------\n\n");
    printf("ENCONTRE O INVERSO DA EXPRESSÕA: a mod b \n\n");
    printf("---------------------------------------------------\n\n");
    printf("Digite o valor de 'a': \n");
    scanf("%d", &a);

    printf("Digite o valor de 'b' : \n");
    scanf("%d", &b);

    
    while ((i*a)%b != 1)
    {
        i++;
    }
    system("clear");
     printf("-----------------------------------\n\n");
    printf("O inverso de (%d mod %d) é : %d\n", a,b, i);
    printf("%d * %d ≡ %d (mod %d) ≡ 1 (mod %d)\n\n", a, i,a*i, b,b);
    printf("-----------------------------------\n\n");


    return 0;
}
