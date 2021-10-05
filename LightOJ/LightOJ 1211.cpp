#include<iostream>
using namespace std;
int main(){

    int t,n,x1,y1,z1,x2,y2,z2,x3,y3,z3,x4,y4,z4;

    cin>>t;

    for(int i=1; i <= t; i++){
        cin>> n;
        x3=y3=z3=x4=y4=z4=0;
        while(n--){
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            if(x1>x3) x3=x1;
            if(y1>y3) y3=y1;
            if(z1>z3) z3=z1;

            if(x2<x4 || x4==0) x4=x2;
            if(y2<y4 || y4==0) y4=y2;
            if(z2<z4 || z4==0) z4=z2;

        }
        if(((x4-x3)*(y4-y3)*(z4-z3))>0)
            cout<<"Case "<<i<<": "<<(x4-x3)*(y4-y3)*(z4-z3)<<endl;
        else
            cout<<"Case "<<i<<": 0"<<endl;
    }
}
