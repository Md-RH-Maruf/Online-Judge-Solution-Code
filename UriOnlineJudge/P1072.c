#include<stdio.h>

int main()
{
    int n,x,cin=0,cout=0,i;
    scanf("%d",&n);


    for(i=0;i<n;i++){
        scanf("%d",&x);
       if(x>=10 && x<=20){

        cin++;

       }else
            cout++;

    }
    printf("%d in\n",cin);
    printf("%d out\n",cout);


}
