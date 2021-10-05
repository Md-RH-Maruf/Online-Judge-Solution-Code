#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int t,s,coll,ex,row,col,value,count=1;
    double sq;
    cin>>t;

    while(t--){

         cin>> s;

         sq = sqrt(s);

        coll= ceil(sq);
        ex = coll * coll - s;

            if(coll % 2 == 1){
                if(ex<coll){
                    row=ex+1;
                    col=coll;
                }else{
                    col=2*coll-ex-1;
                    row=coll;
                }
            }else{
                 if(ex<coll){
                    col=ex+1;
                    row=coll;
                }else{
                    row=2*coll-ex-1;
                    col=coll;
                }
            }

            cout<<"Case "<<count++<<": "<<row<<" "<<col<<endl;
    }



}
