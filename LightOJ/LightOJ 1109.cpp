#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int t,n,sq,divisor,divArray[1000],posArray[1000],temp,pos;

    for(int i = 1;i <= 1000;i++){
        n=i;
        divisor = 0;
        sq=sqrt(n);
        for(int j=1;j<=sq;j++){
            if(n%j == 0){
              if(n/j == j) divisor += 1;
              else divisor += 2;
            }
        }
        divArray[i-1] = divisor;
    }

     for(int i = 1;i <= 1000;i++){
       temp = divArray[i-1];
       pos = 0;
       for(int j=1; j<=1000; j++){
            if(temp>divArray[j-1]){
              pos++;
            }else if(temp == divArray[j-1] && i<j) pos++;
       }

       posArray[pos] = i;
    }
    cin>>t;
    for(int i = 1;i <= t;i++){
        cin>>n;
        cout<<"Case "<<i<<": "<<posArray[n-1]<<endl;
    }
}
