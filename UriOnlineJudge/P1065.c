#include<stdio.h>

int main()
{
    int n;
    int i,count=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0){
            count++;
        }

    }
    printf("%d valores pares\n",count);

}
