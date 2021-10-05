#include<stdio.h>
int main(){

    int a,b,grenais=0,inter=0,gremio=0;
    scanf("%d %d",&a,&b);
    if(a>b) inter++;
    else if(b>a) gremio++;
    grenais++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&a);
    while(a == 1){
        scanf("%d %d",&a,&b);
        if(a>b) inter++;
        else if(b>a) gremio++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&a);
        grenais++;
    }
    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",grenais-(inter+gremio));
    if(inter>gremio)
        printf("Inter venceu mais\n");
    else if(gremio>inter)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
}
