#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int t,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,length,height;
    double l,h;


    cin>>t;
    for(int i=1;i<=t;i++){

        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

        height = sqrt(pow(By-Cy,2));

        length = sqrt(pow(Bx-Cx,2));

        l = sqrt(pow(Ax-Bx,2)+pow(Ay-By,2));
        h = sqrt(pow(By-Cy,2)+pow(Bx-Cx,2));

        if(Cy<By)
            Dy = Ay - height;
        else
            Dy = Ay + height;

        if(Cx<Bx) Dx = Ax - length;
        else Dx = Ax + length;

        printf("Case %d: %d %d ",i,Dx,Dy);
        cout<<(int)(l* h)<<endl;
    }
}
