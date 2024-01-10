#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        string result(n,' ');

        for(int i=0;i<n;++i){
            result[indices[i]]=s[i];
        }
        return result;
    }
};
int main() {
    Solution solution;

    string inputString;
    cout << "Vendos një varg karakteresh: ";
    getline(cin, inputString);

    vector<int> inputIndices;
    int index;
    cout << "Vendos vektorin e indekseve: ";
    for (int i = 0; i < inputString.size(); ++i) {
        cin >> index;
        inputIndices.push_back(index);
    }

    string result = solution.restoreString(inputString, inputIndices);

    cout << "Rezultati pas rikthimit të vargut: " << result << endl;

    return 0;
}
