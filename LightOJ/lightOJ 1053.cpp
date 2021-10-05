#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,temp,count=1;

    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        cin>>c;

        if(a>c){
            temp = c;
            c=a;
            a = temp;
        }
        if(b>c) {
            temp = c;
            c = b;
            b = temp;
        }
        if((c*c)==((a*a)+(b*b))){
            cout<<"Case "<<count++<<": yes"<<endl;
        }else{
            cout<<"Case "<<count++<<": no"<<endl;
        }
    }
}
