#include<iostream>
#include<vector>
using namespace std;
class hill{
public:
    string name="jahed";
    std::vector<int> neighbour;
    std::vector<int> subNeig;

    std::vector<int> getCopyOfNeighbour(){
        return neighbour;
    }

    bool isHaveSubNeig(int hillNo){
        for(unsigned int i=0;i<subNeig.size();i++){
            if(hillNo == subNeig[i]) return true;
        }
        return false;
    }
};
int main(){
    hill h;
    h.neighbour.push_back(5);
    h.subNeig.push_back(5);
    cout<<h.name<<endl;
    std::vector<int> negh = h.getCopyOfNeighbour();
    cout<<((bool)h.isHaveSubNeig(4));
}
