#include<stdio.h>
int main(){

    int n,a,b,sum,i;

    scanf("%d",&a);
    while(a!=0){
        sum = 0;

        for(i=1 ;i<=5;i++){
           if(a%2 == 0){
                sum += a;
           }else{
                a++;
                sum += a;
            }
            a=a+2;
        }
        printf("%d\n",sum);
       scanf("%d",&a);

    }
}
