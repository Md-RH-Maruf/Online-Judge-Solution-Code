#include<stdio.h>

int main()
{
    int n=0,temp=0,p,i;




    for(i=1;i<=10;i++){
        scanf("%d",&temp);
        if(temp>n){
            n = temp;
            p = i;
        }

    }
    printf("%d\n",n);
    printf("%d\n",p);


}
