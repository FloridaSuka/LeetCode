#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
class Solution {
public:
    string truncateSentence(string s, int k) {
       istringstream iss(s);
       vector<string> words;
        while (iss >> s) {
            words.push_back(s);
        }

        string result;
        for (int i = 0; i < k; ++i) {
            result += words[i];
            if (i < k - 1) {
                result += " ";
            }
        }

        return result; 
    }
};
int main(){
    Solution solution;
    string sentence;
    int n;
    string rez;
    cout<<"Vendosni fjaline: ";
    getline(cin,sentence);
    cout<<"Vendosni numrin e fjalive: ";
    cin >>n;
    rez=solution.truncateSentence(sentence, n);
    cout<<rez;
    return 0;
}
