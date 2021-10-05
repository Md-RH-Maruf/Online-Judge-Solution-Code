#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t,n,a,b,c,dif;

    cin>>t;

    for(int i = 1;i<=t ; i++){
        cin>>n;
        b=a=2;
        c=0;

        while(n--){
            cin>>a;
            dif = a-b;

            if(dif/5 > 0) c += ceil((float) dif /  5.0);
            else if(dif>0) c++;
            b=a;
        }

        cout<<"Case "<<i<<": "<<c<<endl;
    }
}
