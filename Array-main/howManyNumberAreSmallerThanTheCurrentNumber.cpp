#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        vector<int> sortNums = nums;
        sort(sortNums.begin(), sortNums.end());

        for (int i = 0; i < n; ++i) {
            int count = lower_bound(sortNums.begin(), sortNums.end(), nums[i]) - sortNums.begin();
            result[i] = count;
        }

        return result;
    }
};

int main() {
    Solution solution;
    int n;
    vector<int> nums1(n);
    int num1;
    cout<<"Length vector: ";
    cin>>n;

    cout << "Enter values:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> num1;
        nums1.push_back(num1);
    }

    vector<int> result1 = solution.smallerNumbersThanCurrent(nums1);

    cout << "Output: [";
    for (int i = 0; i < result1.size(); ++i) {
        cout << result1[i];
        if (i < result1.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
