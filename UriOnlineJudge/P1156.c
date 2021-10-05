#include<stdio.h>
int main(){


    float s=0; int i=1,up=1,down=1;


    while(up<=39){
        s += (float)up/down;
        up += 2;
        down = down*2;
    }


    printf("%.2f\n",s);
    }

