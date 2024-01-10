#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        int total = 0;
        for (auto it : count) {
            total += it.second * (it.second - 1) / 2;
        }

        return total;
    }
};

int main() {
    Solution solution;

    // Merr vlerat e vektorit nga përdoruesi
    int size;
    cout << "Vendos numrin e elementeve te vektorit: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Vendos elementet e vektorit (nje nga nje): ";
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }

    // Thirr metoden numIdenticalPairs
    int result = solution.numIdenticalPairs(nums);

    // Shfaq rezultatin
    cout << "Numri i çifteve identik: " << result << endl;

    return 0;
}
