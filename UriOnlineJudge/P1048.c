#include<stdio.h>
int main(){

    float a,salary;
    int percent;
    scanf("%f",&a);

    if(a>=0 && a<=400){
        percent = 15;
    }
    else if(a>400 && a<=800){
        percent = 12;
    }
    else if(a>800 && a<=1200){
        percent = 10;
    }
    else if(a>1200 && a<=2000){
        percent = 7;
    }
    else if(a>2000 ){
        percent = 4;
    }
    salary = (a*percent)/100;
    printf("Novo salario: %.2f\n",salary+a);
    printf("Reajuste ganho: %.2f\n",salary);
    printf("Em percentual: %d %%\n",percent);
}
