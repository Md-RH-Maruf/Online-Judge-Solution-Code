#include<iostream>
using namespace std;
int main(){
    int n,c=0;

    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++){
        int k=0;
        for(int j=n-i-1;j<n;j++){

            a[k++][j] = ++c;
        }
    }

    for(int i=1;i<n;i++){
        int k=i;
        for(int j=0;j<n-i;j++){

            a[k++][j] = ++c;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
