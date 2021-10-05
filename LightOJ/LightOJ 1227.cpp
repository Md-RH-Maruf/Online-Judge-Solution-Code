#include<iostream>
using namespace std;

int main(){
    int t,n,p,q,tc,tg;

    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>p>>q;
        tc=0;tg=0;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<n;j++){
            if(a[j]+tg>q){

                break;
            }else{
                tg += a[j];
                tc++;
            }
            if(tc == p) break;
        }
        cout<<"Case "<<i<<": "<<tc<<endl;


    }
}
