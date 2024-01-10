#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int result;
        int product=1;
        int sum=0;
        while(n!=0){
            int digit=n%10;
            sum=sum+digit;
            product=product*digit;
            n/=10;
           
        }
         result=product-sum;
        return result;

        
    }
};
int main(){
    Solution solution;
    int x;
    cout<<"n=";
    cin>>x;
    int res=solution.subtractProductAndSum(x);
    cout<<res;
    cout<<endl;
    return 0;
}
