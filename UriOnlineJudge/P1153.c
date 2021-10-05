#include<stdio.h>
int main(){

    int n,i,mul=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       mul *= (n-i);
    }
    printf("%d\n",mul);
    }

