#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int> buildArray(vector<int>& nums) {
//      vector<int> ans;
//         for(int i=0;i<nums.size();i++)
//             ans.push_back(nums[nums[i]]);
//         return ans;
//     }
// };

int main(){
    
    int n, value;
    cout<<"Size: ";
    cin>>n;
    
    vector<int> nums;
    while(n--)
    {
        cin>>value;
        nums.push_back(n);
    }
    // Solution s;
    
    // vector<int> ans = s.buildArray(nums);
    
    vector<int> ans;
    for(int i=0;i<ans.size();i++)
    ans.push_back(nums[nums[i]]);

    // _sleep(100);

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}