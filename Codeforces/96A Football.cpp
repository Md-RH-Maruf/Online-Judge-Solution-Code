#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s ;
    int same=1;
    cin>>s;
    int length = s.length();
    for(int i=1;i<length;i++){
       if(s[i] == s[i-1]){
            same++;
            if(same == 7){
                break;
            }
       }else{
           same = 1;
       }

    }
    if(same==7) cout<<"YES";
    else cout<<"NO";
}

