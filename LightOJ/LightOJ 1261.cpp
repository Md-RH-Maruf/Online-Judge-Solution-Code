#include<iostream>
using namespace std;
int main(){
    int t,n,m,k,p;

    cin>>t;

    for(int j=1; j<=t;j++){
        cin>>n>>m>>k;
        int arr[n][k];
        for(int l=0;l<n;l++){
            for(int i=0;i<k;i++){
                cin>>arr[l][i];
            }
        }
        cin>>p;
        int sol[p];
        for(int i = 0;i<p;i++){
            cin>>sol[i];
        }

        bool isP=false,isN=true,isYes=false;
        for(int l=0;l<n;l++){

            for(int i=0;i<k;i++){
                isYes = false;
                isP = false;
                isN = false;
                if(arr[l][i]<0){
                    isN = true;
                    for(int x=0;x<p;x++){
                        if((arr[l][i]*-1) == sol[x]){
                            isN = false;
                            break;
                        }
                    }

                }else{
                    isP = false;
                    for(int x=0;x<p;x++){
                        if(arr[l][i] == sol[x]){
                            isP = true;
                            break;
                        }
                    }

                }
                if(isP || isN){
                    isYes = true;
                    break;
                }

            }
            if(!isYes){
                break;
            }
        }
        if(isYes) {
                cout<<"Case "<<j<<": Yes"<<endl;
            }else{
                cout<<"Case "<<j<<": No"<<endl;
            }
    }
}
