#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int k,n,i,index=1,inValue=1,sqr,prime[15000];

    prime[0]=2;
    while(index != 15000){
        inValue += 2;
        sqr = sqrt(inValue);

        for(i=2;i<=sqr;i++){
            if(inValue % i == 0){
                break;
            }
        }
        if(i>sqr){
            prime[index]=inValue;
            index++;
        }

    }
    cin>>k;

    while(k!=0){
        cin>>n;
        cout<<prime[n-1]<<endl;
        k--;
    }
}

