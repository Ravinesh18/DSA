#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subset(vector<int> arr)
{
    vector<vector<int>> vrr;
    vrr.push_back(vector<int>());
    int v = arr.size();
    for (int i = 0; i < v; i++)
    {
        int n2 = vrr.size();
        for (int j = 0; j < n2; j++)
        {
            vector<int>subset = vrr[j];
            subset.push_back(arr[i]);
            vrr.push_back(subset);
        }

    }
    
    return vrr;
}
int main()
{
    vector<int> arr={1, 2, 3};
    
    vector<vector<int>> result = subset(arr);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
