
#include<bits/stdc++.h>
using namespace std;
double fact[1000009];
int main(){
    int t,n,b;

    fact[0] = 0;
    for(int i = 1;i<=1000000;i++){
        //cout<<"e";
        fact[i] = fact[i-1] + log(i);

    }
    cin>>t;
   for(int i = 1;i<=t;i++){
        cin>>n>>b;
        long long r =  fact[n]/log(b) +1;
        printf("Case %d: %lld\n", i, r);
    }
}
