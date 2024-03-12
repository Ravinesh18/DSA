#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> toCheck3Sum(vector<int>nums){

    vector<vector<int>>ans;
    int a , b ;
    for (int  i = 0; i < nums.size()-1; i++)
    {
      for (int j = i+1; j < nums.size()-1; j++)
      {
        int k = j+1;
        if(nums[i]+nums[j]==nums[k]){
        return nums[k];

        }
      }
      
    }
    
}

int main(){
 vector<int>nums {-1,0,1,2,-1,-4};
toCheck3Sum(nums);

 return 0;
}
