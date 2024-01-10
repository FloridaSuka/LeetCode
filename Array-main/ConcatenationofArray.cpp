#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        for (int i=0;i<n;++i){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
};
int main(){
Solution solution;
int n;
    cout << "Size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the values:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums[i];
    }

    //thirrim funksionin
    vector<int> result = solution.getConcatenation(nums);
//vargu 
    cout << "nums = [";
    for (int i = 0; i < n; ++i) {
        cout << nums[i];
        if (i < n - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    // rezultati
    cout << "Output: [";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;

}
