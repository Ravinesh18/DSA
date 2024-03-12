#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2,1,4,3};
   

    stack<int> s;
    s.push(-1);

    vector<int> ans(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];

        while (s.top() >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
     
     cout<<"Printing answer : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}