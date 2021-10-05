#include<iostream>
using namespace std;
int main(){
    long long int t,n,m,y,z;
    char s;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>m;
        long long int a[n];
        for(int j=0;j<n;j++) cin>>a[j];
        while(m--){
            cin>>s;
            switch(s){
            case 'S':
                cin>>y;
                for(int j=0;j<n;j++) a[j] += y;
                break;
            case 'M':
                cin>>y;
                for(int j=0;j<n;j++) a[j] *= y;
                break;
            case 'D':
                cin>>y;
                for(int j=0;j<n;j++) a[j] /= y;
                break;
            case 'R':
                for(int j=0, l=n-1; j<n/2; j++, l--)
                {
                    z = a[j];
                    a[j] = a[l];
                    a[l] = z;
                }
                break;
            case 'P':
                cin>>y>>z;
                a[y] += a[z];
                a[z] = a[y] - a[z];
                a[y] = a[y] - a[z];
                break;
            }

        }
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<a[j];
            if(j<n-1) cout<<" ";
            else cout<<endl;
        }
    }
}
