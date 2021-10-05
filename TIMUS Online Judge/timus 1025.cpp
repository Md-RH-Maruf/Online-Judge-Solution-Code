#include<iostream>
using namespace std;

int main(){

    int n,t,v=0;
    cin>>n;
    int group[n];

    for(int i = 0;i<n;i++){
        cin>>group[i];
    }

    for(int i = n-1 ; i>=0 ;i--){
        for(int j=0;j<i;j++){
            if(group[j]>group[j+1]){
                t = group[j];
                group[j] = group[j+1];
                group[j+1] = t;
            }
        }
    }

    for(int i = 0 ;i<(n/2)+1 ;i++){
        v += (group[i]/2)+1;
    }

    cout<<v<<endl;
}
