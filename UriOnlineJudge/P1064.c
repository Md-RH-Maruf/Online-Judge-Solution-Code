#include<stdio.h>

int main()
{
    float n,avarage=0;
    int i,count=0;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n > 0){
            count++;
            avarage += n;
        }

    }
    printf("%d valores positivos\n",count);
    avarage /= count;
    printf("%.1f\n",avarage);
}
