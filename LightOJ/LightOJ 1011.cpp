#include<iostream>
using namespace std;

int main(){
    int t,n,;
    int p[16][16];


    cin>>t;
    while(t--){
        cin>>n;
        int temp[n][n];
        for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cin>>p[i][j];
            cin>>temp[i][j];
        }
        }

        for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
                for(int k=i;k<n;k++){
                 for(int l=j;l<n;l++){
                    if(temp[i][j] < p[k][l]){
                temp[i][j] = temp[i][j] + p[k][l]
                p[k][l] = temp[i][j] - p[k][l]
                temp[i][j] = temp[i][j] - p[k][l]

            }
                }
                }

        }
        }

        for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){

         }
        }
    }



}
