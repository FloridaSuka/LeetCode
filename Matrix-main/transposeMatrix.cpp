#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> transposed(col, vector<int>(rows));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < col; ++j) {
                transposed[j][i] = matrix[i][j];
            }
        }

    return transposed;
        
    }
};
int main() {
    Solution solution;

    vector<vector<int>> Matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> transposedMatrix = solution.transpose(Matrix);

    cout << "Matrix:" << endl;
    for (int i = 0; i < Matrix.size(); ++i) {
        for (int j = 0; j <Matrix[i].size(); ++j) {
            cout <<Matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout <<"Transposed Matrix:" << endl;
    for (int i = 0; i < transposedMatrix.size(); ++i) {
        for (int j = 0; j < transposedMatrix[i].size(); ++j) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
