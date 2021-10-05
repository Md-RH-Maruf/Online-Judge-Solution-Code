#include<stdio.h>
int main(){

    int v,i,N[10];
    scanf("%d",&v);
    N[0]=v;
    printf("N[%d] = %d\n",0,v);
    for(i=0;i<9;i++){
        N[i+1] = 2*N[i];
        printf("N[%d] = %d\n",i+1,N[i+1]);
    }

}
