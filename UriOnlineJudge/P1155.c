#include<stdio.h>
int main(){


    float s=0; int i=1;


    while(i<=100){
        s += (float)1/i;
        i++;
    }


    printf("%.2f\n",s);
    }

