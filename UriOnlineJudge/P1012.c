#include<stdio.h>
int main(){


    double A,B,C,result,pi=3.14159;

    scanf("%lf %lf %lf",&A,&B,&C);

    result= (.5*A*C);
    printf("TRIANGULO: %.3lf\n",result);

    result= pi*(C*C);
    printf("CIRCULO: %.3lf\n",result);

    result= .5*(A+B)*C;
    printf("TRAPEZIO: %.3lf\n",result);

    result= B*B;
    printf("QUADRADO: %.3lf\n",result);

    result= A*B;
    printf("RETANGULO: %.3lf\n",result);

}
