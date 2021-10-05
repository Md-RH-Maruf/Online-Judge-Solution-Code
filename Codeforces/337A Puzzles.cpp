#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i = 0;i < m;i++)
        cin>> arr[i];
    int loop = m-n;
    sort(arr,arr+m);
    int minDistance = arr[m-1];

    for(int i = 0;i <= loop; i++){

        if(minDistance > (arr[i+n-1]-arr[i]))
            minDistance = arr[i+n-1]-arr[i];
    }
    cout<<minDistance<<endl;
}
