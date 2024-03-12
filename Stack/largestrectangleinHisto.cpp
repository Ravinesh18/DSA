#include <bits/stdc++.h>
vector<int> nextSmaller(vector<int> arr)
{

    stack<int> s;
    s.push(-1);

     vector<int> ans(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];

        while (s.top()!=-1 && arr[s.top]>= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}
vector<int> prevSmaller(vector<int> arr)
{

    stack<int> s;
    s.push(-1);
    vector<int> ans(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];

        while (s.top()!=-1 && arr[s.top] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
 int largestRectangleArea(vector<int>& heights) {
        
        vector<int> pre = prevSmaller(heights);


        vector<int> next = nextSmaller(heights);
        
        int n = heights.size();
        for (int i = 0; i < heights.size(); i++)
        {
            int l = height[i];
            if(next[i]==-1){
                next[i] = n;
            }

            int w = next[i]-prev[i]-1;

            int a  = l*w;

            int maxi = max(maxi,a);
        }
        

    return maxi;

    }
int main()
{
}