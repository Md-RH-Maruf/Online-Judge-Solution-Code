#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t,r1,c1,r2,c2,count;
    bool same;
    cin>>t;
    for(int i=1;i<=t;i++){
        count=0;
        same = false;
        cin>>r1>>c1>>r2>>c2;

        if((r1 % 2==0 && c1 % 2 == 0) || (r1 % 2 == 1 && c1 % 2 == 1)){
            if((r2 % 2==0 && c2 % 2 == 0) || (r2 % 2 == 1 && c2 % 2 == 1)){
                same  = true;
            }
        }else if((r1 % 2==0 && c1 % 2 == 1) || (r1 % 2 == 1 && c1 % 2 == 0)){
            if((r2 % 2==0 && c2 % 2 == 1) || (r2 % 2 == 1 && c2 % 2 == 0)){
                same  = true;
            }
        }

        if(same){
            if(abs(r1-r2)==abs(c1-c2)){
                cout<<"Case "<<i<<": 1"<<endl;
            }else{
                cout<<"Case "<<i<<": 2"<<endl;
            }
        }
        else
            cout<<"Case "<<i<<": impossible"<<endl;
    }
}


