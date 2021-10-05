#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <vector>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);
    int t,k=0;
    scanf("%d",&t);
    while(t--){
        int a,b,ans,x;
        scanf("%d %d",&a,&b);
        if(a==1 || b==1)ans=a*b;
        else if(a==2 || b==2){
            if(a==2) x=b;
            else x=a;
            if(x%4==1) ans=x+1;
            else if(x%4==2) ans=x+2;
            else if(x%4==3) ans=x+1;
            else ans=x;
        }
        else ans=ceil(((double)a*b)/2);
        printf("Case %d: %d\n",++k,ans);
    }
    return 0;
}
