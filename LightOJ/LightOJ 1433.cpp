#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int t,ox,oy,ax,ay,bx,by;
    double r,c,arc;

    cin>>t;
    for(int i = 1; i <= t ; i++){
        cin>>ox>>oy>>ax>>ay>>bx>>by;

        r = sqrt(pow(ox-ax,2)+pow(oy-ay,2));

        c = sqrt(pow(bx-ax,2)+pow(by-ay,2));


        arc =  r * acos((r*r+r*r-c*c)/(2*r*r));

        printf("Case %d: %lf\n",i,arc);
    }
}
