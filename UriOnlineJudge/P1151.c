#include<stdio.h>
int main(){

    int f0=0,f1=1,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i<=2){
            if(i==1)
                printf("%d",f0);
            else if(i==2)
                printf("%d",f1);
        }
        else{
            f1 = f0 + f1;
            printf("%d",f1);
            f0 = f1 - f0;

        }
        if(i<n)
            printf(" ");
    }
    printf("\n");
}
