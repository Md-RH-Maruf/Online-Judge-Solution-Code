#include<stdio.h>
int main(){

    int i,j,a,temp,maxLength=0,tempLength;

    while(scanf("%d %d",&i,&j) ==2){
            printf("%d %d",i,j);
        if(i>j){
            i=i+j;
            j=i-j;
            i=i-j;
        }

      for(a=i;a<=j;a++){
        temp = a;
        tempLength = 1;
        while(temp != 1){
        if(temp%2 == 0){
            temp = temp/2;
        }else{
            temp = (3*temp)+1;
        }
        tempLength++;
        }
        if(maxLength<tempLength) maxLength = tempLength;


    }


    printf(" %d\n",maxLength);
    }


}
