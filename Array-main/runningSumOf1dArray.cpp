#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> runningSum(n);

        if (n > 0) {
            runningSum[0] = nums[0];

            for (int i = 1; i < n; ++i) {
                runningSum[i] = runningSum[i - 1] + nums[i];
            }
        }

        return runningSum;
        
    }
};

int main() {
    Solution solution;
    int n;
    cout<<"Length array: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter values: "<<endl;
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    vector<int>res=solution.runningSum(nums);
    cout<<"output=[";
    for(int i=0;i<n;i++){
        cout<<res[i];
        if(i<n-1)
        cout<<',';
        else
        cout<<']';
    }
    cout<<endl;
    return 0;
}
