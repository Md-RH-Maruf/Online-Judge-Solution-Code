#include<iostream>
#include<math.h>
using namespace std;

#define pi acos(-1)
int main(){

    int t,r1,r2,h,p,sr;
    double tr,v1;
    cin>>t;

    for(int i = 1;i <= t; i++){
        cin>>r1>>r2>>h>>p;


        tr= r2 + (r1-r2)*(double(p)/h);

        v1 = 1/3.0 * pi * p *( tr*tr + tr*r2 + r2*r2 );
        printf("Case %d: %lf\n",i,v1);


    }
}
