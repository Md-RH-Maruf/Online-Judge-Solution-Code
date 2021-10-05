#include<stdio.h>

int main(){

    int a,b,c,d,minutes;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>c){
        minutes = ((24-a)+c)*60;
        minutes = minutes-b+d ;

    }else if(c>a){
        minutes = (c-a)*60;
        minutes = minutes-b+d ;

    }else if(c==a && d>b){
        minutes = d -b;
    }else{
        minutes = (24*60)-b+d;

    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",minutes/60,minutes%60);
}
