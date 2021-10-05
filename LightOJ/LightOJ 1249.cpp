#include<iostream>

using namespace std;

int main(){
    int t,n;
    int l,w,h,mi,ma,mini,maxi;
    bool thief;
    string s[100];
    cin>>t;

    for(int i =1 ; i<=t ;i++){
        thief = false;

        cin>>n;
        int vol[n];

        for(int j=0;j<n;j++){
            cin>>s[j];
            cin>>l>>w>>h;
            vol[j]=l*w*h;

        }
        ma=mi = vol[0];
        mini = maxi= 0;
        for(int j=0;j<n-1;j++){
            if(vol[j] != vol[j+1]){
               thief = true;
                break;
            }

        }
        if(thief){
            for(int j=0;j<n;j++){

            if(vol[j]<mi){
                mi = vol[j];
                mini=j;
            }

            if(vol[j]>ma){
                ma=vol[j];
                maxi = j;
            }
        }
            cout<<"Case "<<i<<": "<<s[maxi]<<" took chocolate from "<<s[mini]<<endl;
        }else{
            cout<<"Case "<<i<<": no thief"<<endl;
        }

    }
}
