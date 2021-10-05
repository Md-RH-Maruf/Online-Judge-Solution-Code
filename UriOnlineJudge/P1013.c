#include<stdio.h>
int main(){


    int A,B,C,result;

    scanf("%d %d %d",&A,&B,&C);
    if(A>B && A>C)
        result=A;
    else if(B>C)
        result =B;
    else
        result= C;
    printf("%d eh o maior\n",result);

}
