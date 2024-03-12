#include <bits/stdc++.h>
using namespace std;
int adjacentduplicate(string s)
{
    int n = s.length();
    string ans;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans.length() > 0)
        {
            if (s[i] == ans[ans.length() - 1])
            {

                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        else
        {
            ans.push_back(s[i]);
        }
    }

    cout << ans;
    return 0;
}

int main()
{
    string a = "azxxzy";
    adjacentduplicate(a);
    return 0;
}