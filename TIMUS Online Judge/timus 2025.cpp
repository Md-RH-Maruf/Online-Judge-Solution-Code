#include<iostream>
using namespace std;
int main(){
    int t,k,n,div,ot,rem,play=0;

    cin>>t;

    while(t--){
        k=div=rem=play=n=0;
        cin>>n>>k;
        div = n/k;
        rem = n%k;

        if(n==k){
            play = (n*(n-1))/2;
        }else{
            if(rem>0){
                ot = k-rem;
                play += (((rem*(rem-1))/2) * (div+1)*(div+1));
                play += ((ot*(ot-1))/2) * div * div;

                play += ot * rem * div * (div+1);
            }else{
                play += ((k*(k-1))/2) * div * div;
            }


        }

        cout<<play<<endl;
    }


}
