#include<stdio.h>
int main(){
    float a,b,c,area;
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b){

        //area = sqrt(s*(s-a)*(s-b)*(s-c));

        printf("Perimetro = %.1f",a+b+c);
    }else{
        area = (.5*(a+b)*c);
        printf("Area = %.1f",area);
    }


}
