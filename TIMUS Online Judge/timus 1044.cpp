#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,p1,p2,p3,p4,p5,p6,p7,p8,c;
    double last=0;
    cin>>n;
    for(int i = 1;i<=n;i++){
        last = pow(10,i)-1;
    }
    p1=p2=p3=p4=p5=p6=p7=p8=c=0;
    switch(n){
    case 2:
        for(int i = 0;i<=last ;i++){


            if(p2 == 10){
                p2=0;
                p1++;
            }
            if(p1==p2) c++;
            p2++;
        }
        break;
        case 4:
            for(int i = 0;i<=last ;i++){
                if(p4 == 10){
                    p4=0;
                    p3++;

                    if(p3 == 10){
                        p3=0;
                        p2++;
                        if(p2 == 10){
                            p2=0;
                            p1++;
                        }
                    }
                }
                if(p1+p2==p3+p4) c++;
                p4++;
            }
        break;
        case 6:
            for(int i = 0;i<=last ;i++){
                    if(p6 == 10){
                            p6=0;
                            p5++;
                            if(p5 == 10){
                                p5=0;
                                p4++;
                                if(p4 == 10){
                    p4=0;
                    p3++;

                    if(p3 == 10){
                        p3=0;
                        p2++;
                        if(p2 == 10){
                            p2=0;
                            p1++;
                        }
                    }
                }
                            }
                        }

                if(p1+p2+p3==p4+p5+p6) c++;
                p6++;
            }
        break;
        case 8:
            for(int i = 0;i<=last ;i++){
                if(p8 == 10){
                    p8=0;
                    p7++;
                    if(p7 == 10){
                        p7=0;
                        p6++;
                        if(p6 == 10){
                            p6=0;
                            p5++;
                            if(p5 == 10){
                                p5=0;
                                p4++;
                                if(p4 == 10){
                                    p4=0;
                                    p3++;
                                    if(p3 == 10){
                                        p3=0;
                                        p2++;
                                        if(p2 == 10){
                                            p2=0;
                                            p1++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if(p1+p2+p3+p4==p5+p6+p7+p8) c++;
                p8++;
            }
        break;
    }



    cout<<c<<endl;
}
