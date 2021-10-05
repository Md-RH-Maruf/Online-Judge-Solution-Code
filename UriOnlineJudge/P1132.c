#include<stdio.h>
int main(){

    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y){
        x=x+y;
        y = x-y;
        x = x-y;
    }
    for(;x<=y;x++){
        if(x%13 != 0){
            sum += x;
        }
    }
    printf("%d\n",sum);
}
