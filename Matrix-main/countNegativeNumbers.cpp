#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int countNegatives = 0;

        int m = grid.size();
        int n = grid[0].size();

        int row = 0;
        int col = n - 1;

        while (row < m && col >= 0) {
            if (grid[row][col] < 0) {
                countNegatives += m - row;
                col--;
            } else {
                row++;
            }
        }

        return countNegatives;
    }
};

int main() {
    Solution solution;

    //dimensionet  ematrices
    int m, n;
    cout << "Number of rows: ";
    cin >> m;
    cout << "Number of columns: ";
    cin >> n;

    // inicializimi
    vector<vector<int>> grid(m, vector<int>(n));
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Element at position (" << i << ", " << j << "): ";
            cin >> grid[i][j];
        }
    }
    
    //printimi
     cout << "Entered Matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        cout << "[";
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j];
            if (j < n - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    int count = solution.countNegatives(grid);
    cout << "Count of negative numbers: " << count << endl;

    return 0;
}
