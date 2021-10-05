#include<stdio.h>

int main(){

    float a,b,c,r1,r2,check;
    scanf("%f %f %f",&a,&b,&c);
    check=(b*b)-(4*a*c);

    if(check<0 || 2*a==0){
        printf("Impossivel calcular\n");
    }else{
        r1=(-b+sqrt(check))/(2*a);
        r2=(-b-sqrt(check))/(2*a);
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
}
