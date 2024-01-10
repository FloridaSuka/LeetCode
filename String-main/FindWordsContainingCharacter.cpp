#include<iostream>
#include <vector>
#include<string>
using namespace std;
class Solution{
    public:
     vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>result;
        for (int i=0;i<words.size();++i){
            if(containsChar(words[i],x)){
                result.push_back(i);
            }
        }
        return result;
    }
    private:
    bool containsChar(const string& word, char x) {
        for (char c : word) {
            if (c == x) {
                return true;
            }
        }
        return false;
     }
};
int main(){
    Solution solution;
    vector<string>words1;
    char y;
    int n;
    cout<<"Vendos numrin e fjaleve: ";
    cin>>n;
    cout<<endl;
    
    cout<<"Vends fjalet: "<<endl;
    for(int i=0;i<n;++i){
        string word;
        cin>>word;
         words1.push_back(word);
    }
    cout<<"Words=[";
    for(int i=0;i<n;++i){
        cout<<words1[i];
        if(i<n-1){
            cout<<',';
        }
        else 
        cout<<']';
    }
    cout<<endl;
    cout<<"x=";
    cin>>y;
    vector<int> result1 = solution.findWordsContaining(words1, y);
vector<int> result = solution.findWordsContaining(words1, y);
cout<<'[';
   for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ',';
        } else {
            cout << ']' << endl;
        }
    }
    
    return 0;
}
