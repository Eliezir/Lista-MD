/*
9. Escrever um programa para encontrar a solução única de três congruências usando
o Teorema Chinês do Resto. (Lembre-se de verificar se os módulos são coprimos).
*/

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
    printf("Seja o sistema: x ≡ r1 mod(m1), x ≡ r2 mod(m2),..., x ≡ rk mod(mk )\n");
    printf("Digite 3 linhas com os valores de 'r' e 'm' separados por um espaço\n");
    scanf("%d %d",&r1,&m1);
    scanf("%d %d",&r2,&m2);
    scanf("%d %d",&r3,&m3);
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
    //printf("\n\nxzao: %d\n", xzao);
    
    int resultado = xzao/eme;
    int superesto = xzao%eme;
    
    printf("## Solução: %d \n",superesto);
    
    

    return 0;
}
