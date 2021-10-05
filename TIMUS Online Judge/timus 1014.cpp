#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int n,divisor,product=0,p=0;
    double rem;

    cin>>n;

    if(n==0)
            cout<<10<<endl;
    else if(n==1)
            cout<<1<<endl;
    else{
        while(n != 1){
            for(divisor = 9;divisor>=2;divisor--){
                if(n%divisor==0){

                    rem=(divisor * (pow(10,p++)));
                    product = rem + product;
                    n = n/divisor;

                    break;

                }
            }
            if(divisor==1) break;
        }
        if(n != 1){
            cout<<-1<<endl;
        }else{
            cout<<product<<endl;
        }

    }
}
