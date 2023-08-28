#include <stdio.h>
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


int main(){
    int n;
    scanf("%d", &n);

    int x = read(n);
    printf("%d", x);

    return 0;
}