#include<stdio.h>
int main(){

    int x,a=0,g=0,d=0;
    scanf("%d",&x);
    while(x!=4){
        if(x==1) a++;
        else if(x==2) g++;
        else if(x==3) d++;
        scanf("%d",&x);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);

}
