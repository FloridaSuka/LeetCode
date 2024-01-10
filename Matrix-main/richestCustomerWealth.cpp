#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int maxWealth = 0;

        for (int i = 0; i < accounts.size(); ++i) {
            int customerWealth = 0;

            for (int j = 0; j < accounts[i].size(); ++j) {

                customerWealth += accounts[i][j];
            }

            maxWealth = max(maxWealth, customerWealth);
        }

        return maxWealth;  
    }
};

int main() {
    Solution solution;
//dimensionet e matrices
    int m, n;
    cout << "Number of customers: ";
    cin >> m;
    cout << "Number of wealth: ";
    cin >> n;

  
   vector<vector<int>> accounts(m, vector<int>(n));
   cout<<endl;
   cout<<"Fill"<<endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Write "<< j+1 << " date for client" <<i+1<<": ";
            cin >> accounts[i][j];
        }
    }
    
cout << "account= [";
for (int i = 0; i < m; ++i) {
    cout << "[";
    for (int j = 0; j < n; ++j) {
        cout << accounts[i][j];
        if (j < n - 1) {
            cout << ",";
        }
    }
    cout << "]";
    if (i < m - 1) {
        cout << ",";
    }
}
cout << "]";
cout<<endl;

    // rezultati
    cout << "Maximum Wealth: " << solution.maximumWealth(accounts) << endl;

    return 0;
}
