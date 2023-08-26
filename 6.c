#include <stdio.h>
#include <math.h>
#include <stdlib.h>


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




void find(int a,int b, int mdc){
   

    int i = 0;
    int j;
    do
    {
        i++;
        j = 0;

        while ((a*i - b*j)>mdc)
        {
            j++;
        }



    } while ((a*i - b*j) != mdc);
    


    int k = 0;
    int z;
    do
    {
        k++;
        z = 0;

        while ((b*k - a*z)>mdc)
        {
            z++;
        }



    } while ((b*k - a*z) != mdc);

    if(abs(i-j) < abs(k-z)){
        printf("%d = (%d) * %d + (-%d) * %d\n\n", mdc, i, a, j,b);
        printf("S = -%d\nT = %d\n", j, i);
    } else {
        printf("%d = (%d) * %d + (-%d) * %d\n", mdc, k, b, z,a);
        printf("S = -%d\nT = %d\n", z, k);
    }
    
    
    
}
    




int main(){
    int numberOne, numberTwo, result;


     scanf("%d %d", &numberOne, &numberTwo);

    //verificando qual o maior numero
    if(numberOne > numberTwo){
        //Caso o primeiro seja o maior...
        result = euclides(numberOne, numberTwo);
        
        
    } else {
        //caso o segundo seja o maior ...
        result = euclides(numberTwo, numberOne);    
        
    }

   


    

    
    
    find(numberOne,numberTwo, result);

    return 0;
}