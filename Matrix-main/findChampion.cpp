#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();

        for (int i = 0; i < n; ++i) {
            bool isChampion = true;

            for (int j = 0; j < n; ++j) {
                if (i != j && grid[j][i] == 1) {
                    isChampion = false;
                    break;
                }
            }

            if (isChampion) {
                return i;
            }
        }
        return -1;

    }
};
int main() {
    Solution solution;

    // Ex 1
    vector<vector<int>> grid1 = {{0, 1}, {0, 0}};
    cout << "Example 1: " << solution.findChampion(grid1) << endl;

    // Ex 2
    vector<vector<int>> grid2 = {{0, 0, 1}, {1, 0, 1}, {0, 0, 0}};
    cout << "Example 2: " << solution.findChampion(grid2) << endl;

    return 0;
}
