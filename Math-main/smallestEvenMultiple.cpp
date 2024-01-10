#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int result;
        if(n%2!=0)
        result=n*2;
        else
        result=n;
         return result;
    }
   
};
int main(){
    Solution solution;
    int x;
    cout<<"n=";
    cin>>x;
    int res=solution.smallestEvenMultiple(x);
    cout<<res;
    return 0;
}
