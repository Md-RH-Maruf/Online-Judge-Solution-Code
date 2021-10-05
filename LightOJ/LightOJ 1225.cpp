#include<iostream>
using namespace std;
int main(){
    int t;
    long long n,t2,temp;

    cin>>t;

    for(int i=1;i<= t;i++){
        temp = 0;
        cin>>n;
        t2 = n;
        while( n!= 0){
            temp = (temp*10) + (n%10);
            n /= 10;
        }

        if(temp == t2){
            cout<<"Case "<<i<<": Yes"<<endl;
        }else
            cout<<"Case "<<i<<": No"<<endl;

    }

}
