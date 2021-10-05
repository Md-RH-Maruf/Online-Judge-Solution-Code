#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int t= n*n;
    int a[n][n];

    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i-j][j]<<" ";
        }
    }

    for(int i = n-1;i>=1;i--){
        int m = n-i;
        for(int j=n-1;j>=n-i;j--){
            cout<<a[j][m++]<<" ";
        }
    }
    cout<<endl;



}
