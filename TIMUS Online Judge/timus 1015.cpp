#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double pi = 2*acos(0.0);

    int t,count=1;
    double r,area;
    cin>>t;
    while(t--){

        cin>>r;
        area =(4*r*r)-(pi*r*r);
        printf("Case %d: %.2lf\n",count++,area);

    }
}
