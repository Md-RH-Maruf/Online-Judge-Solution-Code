#include<stdio.h>

int main()
{
    int a,b,sum=0,i;
    scanf("%d %d",&a,&b);
    if(a>b){
        sum=b;
        b = a;
        a = sum;
        sum=0;
    }

    for(i=a+1;i<b;i++){

       if(i%2==1 || i%2==-1){

        sum += i;

       }

    }
    printf("%d\n",sum);


}
