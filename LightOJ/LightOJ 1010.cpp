#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int t,m,n,mul;
    cin>>t;
    for(int i=1;i<=t;i++){

        cin>>m>>n;
        mul = m*n;
        if(m==1 || n==1){
            cout<<"Case "<<i<<": "<<mul<<endl;
        }else if(m==2 || n==2){
            if(m<n) m=n;

           if(m % 4 == 2){
                cout<<"Case "<<i<<": "<<m+2<<endl;
           }else if(m%4 == 1 || m%4 == 3){
                cout<<"Case "<<i<<": "<<m+1<<endl;
           }else{
                cout<<"Case "<<i<<": "<<m<<endl;
           }
        }else{
            if(mul % 2 == 1){
                cout<<"Case "<<i<<": "<<((mul/2)+1)<<endl;
            }else{
                cout<<"Case "<<i<<": "<<((mul/2))<<endl;
            }
        }
    }
}
