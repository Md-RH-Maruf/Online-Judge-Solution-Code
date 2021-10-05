#include<stdio.h>
int main(){

    int n,sum=0;
    float avarage,count=0;


    while(1){
        scanf("%d",&n);
        if(n<0){
            break;
        }else
        sum += n;
        count++;

    }

    avarage = sum/count;
    printf("%.2f\n",avarage);
    }

