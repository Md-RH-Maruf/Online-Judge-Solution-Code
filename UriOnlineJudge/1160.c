#include<stdio.h>
int main(){

    int i,t,pa,pb,count=0;
    float g1,g2;
    scanf("%d",&t);

    for(i=0;i<t;i++){
            count = 0;
        scanf("%d %d %f %f",&pa,&pb,&g1,&g2);
        while(pa<=pb){
            pa += (int)((pa*g1)/100);
            pb += (int)((pb*g2)/100);
            count++;
        }

        if(count<=100){
            printf("%d anos.\n",count);
        }else
            printf("Mais de 1 seculo.\n");

    }

}
