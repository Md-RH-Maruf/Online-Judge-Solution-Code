#include<stdio.h>
int main(){

    int x,z,sum=0,count=2;
    scanf("%d %d",&x,&z);
    while(z<=x){
        scanf("%d",&z);
    }
    sum = x++ + x;

    while(sum<=z){

        sum += ++x;
        count++;

    }
    printf("%d\n",count);
}
