#include<iostream>
#include <unordered_set>
#include<string>
using namespace std;
class Solution{
    public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jewelSet(jewels.begin(),jewels.end());
        int jewelCount=0;
        for(char stone:stones){
            if (jewelSet.count(stone)>0){
                jewelCount++;
            }
        }
        return jewelCount;
    }
};
int main(){
    Solution solution;
    string jewels1;
    string stones1;
    cout<<"Vendos guret e qmuar: ";
    cin>>jewels1;
    cout<<endl;
    cout<<"Vendos guret qe keni: ";
    cin>>stones1;
    cout<<endl;
    int rezultati = solution.numJewelsInStones(jewels1, stones1);
    cout<<"Numri i gureve te qmuar ne guret e disponueshem eshte "<<rezultati<<endl;

    return 0;
}
