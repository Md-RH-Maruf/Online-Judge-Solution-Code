#include<stdio.h>
int main(){

    int x,j;
    scanf("%d",&x);


    while(x!=0){
        for(j=1;j<=x;j++){
            printf("%d",j);
            if(j<x) printf(" ");

        }
        printf("\n");
        scanf("%d",&x);

    }

}
