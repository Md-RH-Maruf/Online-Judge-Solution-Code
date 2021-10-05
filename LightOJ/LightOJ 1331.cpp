#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double r1,r2,r3,a,b,c,s,area;
    int t;

    cin>>t;
    for(int i = 1;i<=t ;i++){
        cin>>r1>>r2>>r3;

        a = r2+r3;
        b = r1+r3;
        c = r1+r2;

        s = (a+b+c)/2;

        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<(.5*r1*r1*acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))<<endl;

        area -= (.5*r1*r1*acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)));
        area -= (.5*r2*r2*acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c)));
        area -= (.5*r3*r3*acos((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a)));
        printf("Case %d: %lf\n",i,area);
    }
}
