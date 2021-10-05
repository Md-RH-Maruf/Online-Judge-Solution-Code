#include<stdio.h>

int main()
{
    int n;
    int i,cp=0,cn=0,ce=0,co=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0){
            ce++;
        }else{
            co++;
        }
        if(n>0){
            cp++;
        }else if(n<0){
            cn++;
        }

    }
    printf("%d valor(es) par(es)\n",ce);
    printf("%d valor(es) impar(es)\n",co);
    printf("%d valor(es) positivo(s)\n",cp);
    printf("%d valor(es) negativo(s)\n",cn);

}
