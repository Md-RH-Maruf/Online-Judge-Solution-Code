#include<stdio.h>
int main(){

    int a,b;
    double c,f;
    scanf("%d %d %lf",&a,&a,&c);
    scanf("%d %d %lf",&b,&b,&f);

    c = (a*c)+(b*f);
    printf("VALOR A PAGAR: R$ %.2lf\n",c);

}
