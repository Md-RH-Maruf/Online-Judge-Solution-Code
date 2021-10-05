#include<iostream>
using namespace std;
int main(){

    int t,mp,lp,totalSec,count=0;
    cin >>t;
    while(t--){
        cin>>mp;
        cin>>lp;
        totalSec = ((abs(lp-mp)+mp)*4)+19;
        cout<<"Case "<<++count<<": "<<totalSec<<endl;
    }
}
