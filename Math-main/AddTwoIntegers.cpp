#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};
int main(){
    Solution solution;
    int x,y;
    cout<<"num1=";
    cin>>x;
    cout<<"num2=";
    cin>>y;
    int res=solution.sum(x,y);
    cout<<res;
    return 0;
}
