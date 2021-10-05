#include<stdio.h>
int main(){

    int x,y,i=1,j;
    scanf("%d %d",&x,&y);


    while(i<=y){
        for(j=1;j<=x && i<=y;j++){
            printf("%d",i);
            if(j<x) printf(" ");
            i++;
        }
       printf("\n");
    }

}
