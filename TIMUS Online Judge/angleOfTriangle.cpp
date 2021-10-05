#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){

    double a,b,c;
    double angleA,angleB,angleC;

    cin>>a;
    cin>>b;
    cin>>c;


    angleA = acos(((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)));
    angleB = acos(((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c)));
    angleC = acos(((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a)));

    //angleA = ((acos(a/b)) * 180) / 3.141592 ;
    //angleB = ((atan(b/c)) * 180) / 3.141592 ;
    //angleC = ((atan(c/a)) * 180) / 3.141592 ;
    cout<<endl<<(angleA*180)/3.14159<<endl;
    cout<<endl<<(angleB*180)/3.14159<<endl;
    cout<<endl<<(angleC*180)/3.14159<<endl;
    //cout<<angleB<<endl;
    //cout<<angleC<<endl;

}
