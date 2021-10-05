#include<iostream>
using namespace std;
int main(){
    double v1,v2,v3,a1,a2,d,T;
    int t;

    cin>>t;
    for(int i = 1;i<=t ;i++){
        cin>>v1>>v2>>v3;
        cin>>a1>>a2;

        d = (v1*v1)/(2*a1);
        T = v1/a1;

        d += (v2*v2)/(2*a2);
        if(T<(v2/a2))
            T = v2/a2;

        printf("Case %d: %lf %lf\n",i,d,T*v3);
    }
}
