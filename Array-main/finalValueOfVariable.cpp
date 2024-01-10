#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int rezultati=0;
        for(const string& op:operations){
            if(op=="++X"||op=="X++"){
                ++rezultati;
            }
            else if(op=="--X"||op=="X--"){
                --rezultati;
            }
        }
        return rezultati;
    }
};
int main() {
    Solution solution;

    // Ex 1
    vector<string> operations1 = {"--X", "X++", "X++"};
    cout << "Example 1 Output: " << solution.finalValueAfterOperations(operations1) << endl;

    // Ex 2
    vector<string> operations2 = {"++X", "++X", "X++"};
    cout << "Example 2 Output: " << solution.finalValueAfterOperations(operations2) << endl;

    // Ex 3
    vector<string> operations3 = {"X++", "++X", "--X", "X--"};
    cout << "Example 3 Output: " << solution.finalValueAfterOperations(operations3) << endl;

    return 0;
}
