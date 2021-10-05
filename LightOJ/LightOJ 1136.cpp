#include<iostream>
#include<math.h>
using namespace std;
long long int calculate(long long int n);
int main(){
    int t;
    long long int a,b,n;
    cin>>t;
    for(int i=1;i<=t;i++){

        cin>>a;
        cin>>b;
        a = calculate(a-1);
        b = calculate(b);

        cout<<"Case "<<i<<": "<<b-a<<endl;
    }
}

long long int calculate(long long int n){
    if(n%3==2){
        return ((n/3)*2)+1;
    }else{
        return (n/3)*2;
    }
}
