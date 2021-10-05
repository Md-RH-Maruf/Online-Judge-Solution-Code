#include<stdio.h>

int main()
{
    int n=0,c=0,r=0,s=0,temp,i;
    float total=0;
    char ch;
    scanf("%d",&n);



    for(i=1;i<=n;i++){
        scanf("%d %c",&temp,&ch);
        if(ch=='C'){
            c += temp;
        }
        else if(ch == 'R'){
            r += temp;
        }else if( ch == 'S'){
            s += temp;
        }

    }
    total=c+r+s;
    printf("Total: %.0f cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",(100*c)/total);
    printf("Percentual de ratos: %.2f %%\n",(100*r)/total);
    printf("Percentual de sapos: %.2f %%\n",(100*s)/total);



}
