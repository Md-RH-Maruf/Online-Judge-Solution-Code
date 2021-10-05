#include<iostream>
using namespace std;
int main(){

    int t,n,s,sum,count=1;

    cin>> t;
    while(t--){
        cin>>n;
        sum = 0;
        while(n--){
           cin>>s;
           if(s>=0)
            sum += s;
        }
        cout<<"Case "<<count++<<": "<<sum<<endl;
    }
}
