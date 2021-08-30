#include <bits/stdc++.h>

using namespace std;

vector<int> OddBeforeEven(vector<int>& nums) {
     sort(nums.begin(), nums.end());
     int n = nums.size();
     vector<int> result;
     for(int i = 0; i < n; i++) {
          if(nums[i] % 2 != 0) {
               result.push_back(nums[i]);
          }
     } 
     for(int i = 0; i < n; i++) {
          if(nums[i] % 2 == 0) {
               result.push_back(nums[i]);
          }
     }  
     return result; 
}
int main()
{
    vector<int>v ={2,65,21,18,98};
    vector<int>result=OddBeforeEven(v);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
    
}