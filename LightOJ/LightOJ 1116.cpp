#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    long long int w,n=0,m=0,sq,frtn,div;
    cin>>t;
    for(int i=1;i<=t;i++){

        cin>>w;
        if(w%2 ==0){

            for(int j=2;j<=w;j*=2){
                frtn = w/j;
                if(frtn % 2 == 1){
                    n = frtn;
                    m = j;
                    break;
                }
            }

            cout<<"Case "<<i<<": "<<n<<" "<<m<<endl;
        }else{
            cout<<"Case "<<i<<": Impossible"<<endl;
        }


    }
}
