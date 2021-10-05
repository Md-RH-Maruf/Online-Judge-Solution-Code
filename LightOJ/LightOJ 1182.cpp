#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t,n,count;

    cin>>t;
    for(int i=1;i<=t;i++){
        count=0;
        cin>>n;
        while(n != 0){
            if(n % 2 == 1) count++;
            n /= 2;
        }
        if(count % 2 == 1)
            cout<<"Case "<<i<<": odd"<<endl;
        else
            cout<<"Case "<<i<<": even"<<endl;
    }
}


