#include<stdio.h>

int main()
{
    int n,i;
    float a,b,c,avarage=0;
    scanf("%d",&n);


    for(i=1;i<=n;i++){
        scanf("%f %f %f",&a,&b,&c);
        avarage = (a*2+b*3+c*5)/10;
        printf("%.1f\n",avarage);
    }


}
