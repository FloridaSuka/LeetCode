#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; ++i) {
            ans[i] = nums[nums[i]];
        }

        return ans;
        
    }
};
int main(){
  Solution solution;
  int n;
  cout<<"Length of the array: ";
  cin>>n;
  vector<int>nums(n);
  cout<<"Enter values: "<<endl;
  for (int i=0;i<n;++i){
    cin>>nums[i];
  }
  cout<<"nums=[";
  for (int i=0;i<n;i++){
      cout<<nums[i];
      if(i<n-1)
      cout<<',';
      else
      cout<<']'<<endl;
  }
  vector<int>rez=solution.buildArray(nums);
  cout<<"rez=[";
  for(int i=0;i<n;++i){
  cout<<rez[i];
  if(i<n-1)
      cout<<',';
      else
      cout<<']';
  }
  return 0;
}
