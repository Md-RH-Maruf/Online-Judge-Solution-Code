#include<iostream>
using namespace std;
int main(){
    int t;
    long long  b,n,l,j;
    string a;
    cin>>t;
    for(int i=1;i<=t;i++){
        n=0;
        l = 0;

        cin>>a>>b;
        if(b<0) b *= -1;

        l = a.size();

        if(a[0] == '-')
            j=1;
        else j = 0;

        for(;j<l;j++){
            n=(a[j]-'0')+(n*10);
            n %= b;
        }

        if(n){
            cout<<"Case "<<i<<": not divisible"<<endl;
        }else{
            cout<<"Case "<<i<<": divisible"<<endl;
        }

    }

}
