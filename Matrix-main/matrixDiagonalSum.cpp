#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int n=mat.size();
        int sum;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; ++i) {
            sum1 += mat[i][i];
        }
        for (int i = 0; i < n; ++i) {
            sum2 += mat[i][n-1 - i];
        }
        sum=sum1+sum2;
        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }
};

int main() {
    Solution solution;
//dimensionet e matrices
    int n;
    cout << "Number of rows and columns: ";
    cin >> n;

  
   vector<vector<int>> mat(n, vector<int>(n));
   cout<<endl;
   n=n;
   cout<<"Fill"<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Write element"<<'('<<i<<','<<j<<"): ";
            cin >> mat[i][j];
        }
    }
    
cout << "mat="<<endl<<'[';
n=n;
for (int i = 0; i < n; ++i) {
    cout << "[";
    for (int j = 0; j < n; ++j) {
        cout << mat[i][j];
        if (j < n - 1) {
            cout << " , ";
        }
    }
    cout << "]";
    if (i < n - 1) {
        cout << endl;
    }
}
cout << "]";
cout<<endl;

    // rezultati
    cout << "Sum: " << solution.diagonalSum(mat) << endl;

    return 0;
}
