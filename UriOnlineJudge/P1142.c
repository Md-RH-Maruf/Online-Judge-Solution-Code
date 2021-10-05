#include<stdio.h>
int main(){

    int x=0,n,i=1;
    scanf("%d",&n);
    while(i<=n){
        printf("%d %d %d PUM\n",x+1,x+2,x+3);
        x+=4;
        i++;
    }

}
