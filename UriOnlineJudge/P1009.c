#include<stdio.h>
int main(){
    int A,B;
    double C,salary;
    scanf("%d %d ",&A,&B);
    scanf("%lf",&C);
    salary = B*C;
    printf("NUMBER = %d\n",A);
    printf("SALARY = U$ %.2lf\n",salary);
}
