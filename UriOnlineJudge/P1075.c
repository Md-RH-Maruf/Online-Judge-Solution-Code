#include<stdio.h>

int main()
{
    int n,x,i;
    scanf("%d",&n);


    for(i=0;i<=100;i++){
        if(i%n==0){
            printf("%d\n",i+2);
        }
    }


}
