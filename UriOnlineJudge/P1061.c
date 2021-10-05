#include<stdio.h>

int main()
{
    char dia1[5],dia2[5],c1,c2,c3,c4;
    int sh,sm,ss,eh,em,es,sd,ed,totals;
    scanf("%s %d",&dia1,&sd);
    scanf("%d %c %d %c %d",&sh,&c1,&sm,&c2,&ss);
    scanf("%s %d",&dia2,&ed);
    scanf("%d %c %d %c %d",&eh,&c3,&em,&c4,&es);

    if(sd==ed){
        totals= ((eh*3600)+(em*60)+(es))-((sh*3600)+(sm*60)+ss);
        printf("%d dia(s)\n",totals/86400);
        totals %= 86400;
        printf("%d hora(s)\n",totals/3600);
        totals %= 3600;
        printf("%d minuto(s)\n",totals/60);
        totals %= 60;
        printf("%d segundo(s)\n",totals);

    }else if(sd<ed){
        totals= 86400-((sh*3600)+(sm*60)+ss);
        ed = ed-sd-1;
        totals = totals + (86400*ed)+ ((eh*3600)+(em*60)+(es));
        printf("%d dia(s)\n",totals/86400);
        totals %= 86400;
        printf("%d hora(s)\n",totals/3600);
        totals %= 3600;
        printf("%d minuto(s)\n",totals/60);
        totals %= 60;
        printf("%d segundo(s)\n",totals);
    }
}
