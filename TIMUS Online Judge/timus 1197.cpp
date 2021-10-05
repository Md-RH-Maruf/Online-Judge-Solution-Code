#include<iostream>

using namespace std;

int main(){

    int t,n,count;
    char c;
    cin>>t;
    while(t--){
        count=0;
        cin>>c;
        cin>>n;
        if(c+2 <= 'h'){
            if(n+1 <= 8) count++;
            if(n-1 >= 1) count++;
        }
        if(c-2 >= 'a'){
            if(n+1 <= 8) count++;
            if(n-1 >= 1) count++;
        }
        if(n+2 <= 8){
            if(c+1 <= 'h') count++;
            if(c-1 >= 'a') count++;
        }
        if(n-2 >= 1){
            if(c+1 <= 'h') count++;
            if(c-1 >= 'a') count++;
        }
        cout<<count<<endl;
    }
}
