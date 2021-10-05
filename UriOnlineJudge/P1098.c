#include<stdio.h>

int main()
{
   int n,x,y,i,sum=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        if(x>y){
            sum = x;
            x = y;
            y = sum;
            sum = 0;
        }
        for(x+=1;x<y;x++){
            if(x%2==1)
            sum += x;
        }
        printf("%d\n",sum);
        sum = 0;
   }


}
