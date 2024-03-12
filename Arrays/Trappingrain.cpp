#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = arr.size();
    int res = 0;
    for (int i = 0; i < n-1; i++)
    {
        int l = arr[i];
        for (int j = 0; j<i; j++)
        {
             l = max(l,arr[j]);
        }
        
        int r  = arr[i];
        for (int j = i+1; j < n; j++)
        {
            r  = max(r,arr[j]);
        }
        res = res + (min(l,r) - arr[i]);
    }
    cout<<res;
}