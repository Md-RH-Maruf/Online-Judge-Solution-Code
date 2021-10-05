#include<stdio.h>

int main(){

    float a,b,c,d,avarage;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    avarage = (a*2+b*3+c*4+d*1)/10;

    printf("Media: %.1f\n",avarage);
    if(avarage>=7.0){
        printf("Aluno aprovado.\n");
    }else if(avarage<5.0){
        printf("Aluno reprovado.\n");
    }else if(avarage>=5.0 && avarage<=6.9){
        printf("Aluno em exame.\n");


        scanf("%f",&a);
        printf("Nota do exame: %.1f\n",a);
        avarage = (avarage+a)/2;
        if(avarage>=5.0){
            printf("Aluno aprovado.\n");

        }else if( avarage<5.0)
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n",avarage);

    }
}
