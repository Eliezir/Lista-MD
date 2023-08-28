/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int mdc(int a, int b){
    if(a%b==0){
        return b;
    }else{
        return mdc(b,a%b);
    }
}



int mod(int mmx, int mx, int cont){
    if((mmx*cont)%mx==1){
        return cont;
    }else{
        return mod(mmx,mx,cont+1);
    }
    
    
}




int main()
{
    int m1,r1,m2,r2,m3,r3;
    printf("Digite o dividendo e o resto:\n");
    scanf("%d %d",&m1,&r1);
    scanf("%d %d",&m2,&r2);
    scanf("%d %d",&m3,&r3);
    int eme = m1*m2*m3;
    int mm1 = eme/m1;
    int mm2 = eme/m2;
    int mm3 = eme/m3;
    
    if(mdc(mm1,m1)==1){
        
    }else{
        printf("%d e %d não são coprimos!\n",mm1,m1);
        return 0;
    }
    if(mdc(mm2,m2)==1){
        
    }else{
        printf("%d e %d não são coprimos!\n",mm2,m2);
        return 0;
    }
    if(mdc(mm3,m3)==1){
        
    }else{
        printf("%d e %d não são coprimos!\n",mm3,m3);
        return 0;
    }
    
    int s1 = mod(mm1,m1,1);
    int s2 = mod(mm2,m2,1);
    int s3 = mod(mm3,m3,1);
    
    int xzao = (r1*mm1*s1)+(r2*mm2*s2)+(r3*mm3*s3);
    printf("xzao: %d\n", xzao);
    
    int resultado = xzao/eme;
    int superesto = xzao%eme;
    
    printf("superesto: %d\n",superesto);
    
    

    return 0;
}
