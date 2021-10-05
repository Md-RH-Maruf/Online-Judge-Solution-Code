#include<stdio.h>
int main(){

    char c;
    double a,b;
    while(c=getchar()!='\n'){
    }
    scanf("%lf %lf",&a,&b);
    a=a+((b*15)/100);
    printf("TOTAL = R$ %.2lf\n",a);

}
