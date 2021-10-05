#include<iostream>
#include<math.h>
using namespace std;
#define pi acos(-1)
int main(){

    int n;
    cin>> n;
    double r,x[n],y[n],line=0;
    cin>> r;

    for(int i = 0 ; i<n ; i++){
        cin>>x[i]>>y[i];
    }

    for(int i = 0; i<n ;i++){
        if(i==n-1){
            line += sqrt(pow(x[0]-x[i],2)+pow(y[0]-y[i],2));
        }else{
            line += sqrt(pow(x[i+1]-x[i],2)+pow(y[i+1]-y[i],2));
        }
    }

    line += (2*pi*r);

    printf("%.2lf\n",line);

}
