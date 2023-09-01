/*
8. Escrever um programa para encontrar a solução de uma congruência do tipo ax ≡ b mod m.
*/

#include <stdio.h>

int euclides(int numberHigh, int numberLow){
    //Verifica se o menor numero é zero
    if (numberLow == 0){
        return numberHigh;
    }

    //Caso resto zero, o divisor analisado é o MDC
    if (numberHigh%numberLow == 0){
        return numberLow;
    } else {
        return euclides(numberLow, numberHigh%numberLow);
    }

}





int variable(int x, int a, int b, int m){
   

    if( (b - a*x  )% m == 0){
        return x;
    } else {
        return variable(x+1, a, b, m);
    }


}



int main(){
    int a, b, m, result; 
    scanf("%d %d %d", &a, &b, &m);

    
    //verificando qual o maior numero
    if(a > m){
        //Caso o primeiro seja o maior...
        result = euclides(a, m);
        
        
    } else {
        //caso o segundo seja o maior ...
        result = euclides(m, a);    
        
    }

    if(b%result != 0){
        printf("[ERROR] A congruência não possui solução!\n");
       
    } else {
        printf("A relação possui %d soluções\n", result);

        int x = -1;
        for(int i = 0; i < result; i++)
        {   
            x = variable(x+1, a,b,m);
            printf("X[%d] = %d\n", i + 1, x);
        }
        
    }

   




   

    return 0;
}