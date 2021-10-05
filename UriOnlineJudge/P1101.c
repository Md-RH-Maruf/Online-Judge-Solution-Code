#include<stdio.h>

int main()
{
   int x,y,sum=0;
   scanf("%d %d",&x,&y);
   while(x>0 && y>0){
        if(x>y){
            sum = x;
            x = y;
            y = sum;

        }
         sum=0;
    for(;x<=y;x++){
        printf("%d ",x);
        sum += x;
    }

    printf("Sum=%d\n",sum);

    scanf("%d %d",&x,&y);
   }



}
