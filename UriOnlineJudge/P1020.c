#include<stdio.h>
int main(){

    int year,month,day;
    scanf("%d",&day);
    year = day/365;
    month = (day-(year*365))/30;
    day = (day-(year*365))%30;



    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);
}
