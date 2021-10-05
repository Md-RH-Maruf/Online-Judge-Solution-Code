#include<stdio.h>
int main(){

    int i,j,n,a,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        j=1;
        sum = 0;
        while(j<=a/2){
            if(a%j == 0){
                sum += j;
            }
            j++;
        }
        if(sum==a){
            printf("%d eh perfeito\n",a);
        }else{
            printf("%d nao eh perfeito\n",a);
        }
    }
}
