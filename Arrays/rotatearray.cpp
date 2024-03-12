#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> nums, int k)
{
    vector<int> temp(nums.size());
    int m = k ;
    for (int i = 0; i < k-1; i++)
    {
        temp[i]=nums[m];
        m++;
    }
    for (int i = 0; i < k-1 ; i++)
    {
        temp[m]=nums[i];
    }
    
    temp = nums;


}
int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    void rotate(nums, k);
}