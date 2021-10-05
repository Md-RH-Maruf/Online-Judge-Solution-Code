#include<stdio.h>
int main(){

    double n,tn;
    int notas,moedas,temp;

    scanf("%lf",&n);
    notas= (int) n/1;


    temp= notas/100;
    notas = notas%100;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n",temp);
    temp= notas/50;
    notas = notas%50;
    printf("%d nota(s) de R$ 50.00\n",temp);
    temp= notas/20;
    notas = notas%20;
    printf("%d nota(s) de R$ 20.00\n",temp);
    temp= notas/10;
    notas = notas%10;
    printf("%d nota(s) de R$ 10.00\n",temp);
    temp= notas/5;
    notas = notas%5;
    printf("%d nota(s) de R$ 5.00\n",temp);
    temp= notas/2;
    notas = notas%2;
    printf("%d nota(s) de R$ 2.00\n",temp);


    temp = n/1;
    tn = (n-temp)*100;
    moedas = tn+1e-9;

    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",notas);
    temp= moedas/50;
    moedas = moedas%50;
    printf("%d moeda(s) de R$ 0.50\n",temp);
    temp= moedas/25;
    moedas = moedas%25;
    printf("%d moeda(s) de R$ 0.25\n",temp);
    temp= moedas/10;
    moedas = moedas%10;
    printf("%d moeda(s) de R$ 0.10\n",temp);
    temp= moedas/5;
    moedas = moedas%5;
    printf("%d moeda(s) de R$ 0.05\n",temp);
    temp= moedas/1;
    moedas = moedas%1;
    printf("%d moeda(s) de R$ 0.01\n",temp);


}
