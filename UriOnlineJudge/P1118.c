#include<stdio.h>

int main()
{
   float a,b;
   int x=1;
   while(x!=2){
        if(x==1){
        scanf("%f",&a);
        while(a<0 || a>10){
            printf("nota invalida\n");
            scanf("%f",&a);
        }
        scanf("%f",&b);
        while(b<0 || b>10){
            printf("nota invalida\n");
            scanf("%f",&b);
        }

        printf("media = %.2f\n",(a+b)/2);
        }
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&x);
   }

}
