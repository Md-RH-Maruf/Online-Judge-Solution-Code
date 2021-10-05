#include<stdio.h>
int main(){

    int x,y,temp;
    scanf("%d %d",&x,&y);
    if(x>y){
        x=x+y;
        y = x-y;
        x = x-y;
    }
    temp = x;
    x = (x/5)*5;
    for(;x<=y;x++){
        if(x%5 ==0){
            if(x+2>temp&&x+2<y)
                printf("%d\n",x+2);
            if(x+3>temp&&x+3<y)
                printf("%d\n",x+3);
        }

    }

}
