#include<iostream>
using namespace std;
int main(){
    int t,top,ci;
    string key,url[100];
    url[0] = "http://www.lightoj.com/";
    cin>>t;
    for(int i = 1;i<=t ;i++){
        cout<<"Case "<<i<<":"<<endl;
        ci=top = 0;
        while(1){
            cin>>key;
            if(key=="VISIT"){
                ci++;
                top = ci;
                cin>>url[ci];

                cout<<url[ci]<<endl;
            }
            else if(key=="BACK")
            {
                ci--;
                if(ci<0){
                    ci=0;
                    cout<<"Ignored"<<endl;
                }else{
                    cout<<url[ci]<<endl;
                }

            }else if(key == "FORWARD")   {
                ci++;
                if(ci>top){
                    ci=top;
                    cout<<"Ignored"<<endl;
                }else{
                    cout<<url[ci]<<endl;
                }
            }else if(key == "QUIT"){
                break;
            }
        }
    }
}
