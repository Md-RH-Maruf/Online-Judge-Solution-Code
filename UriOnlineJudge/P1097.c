#include<stdio.h>

int main()
{
    float i,j,c;

    for(i=0,j=1;i<=2.1;i=i+.2,j=j+.2){
        c = i-(int)i;

        if(c==0 || c==1.0 || (c>0&&c<.1)){
            printf("I=%.0f J=%.0f\n",i,j);
            printf("I=%.0f J=%.0f\n",i,j+1);
            printf("I=%.0f J=%.0f\n",i,j+2);
        }else {
            printf("I=%.1f J=%.1f\n",i,j);
            printf("I=%.1f J=%.1f\n",i,j+1);
            printf("I=%.1f J=%.1f\n",i,j+2);
        }
    }


}
