#include<stdio.h>
#include<string.h>
int main()
{
    float a,temp;
    scanf("%f",&a);
    if(a<=2000){
        printf("Isento\n");
    }
    else if(a>2000 && a<=3000){
        temp = a-2000;
        a = (temp*8)/100;
        printf("R$ %.2f\n",a);
    }else if(a>3000 && a<=4500){
        temp = a-3000;
        a = ((temp*18)/100)+80;
        printf("R$ %.2f\n",a);
    }else if(a>4500 ){
        temp = a-4500;
        a = ((temp*28)/100)+80+270;
        printf("R$ %.2f\n",a);
    }
}
