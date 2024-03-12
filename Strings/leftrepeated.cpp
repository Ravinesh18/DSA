#include <bits/stdc++.h>
using namespace std;
int leftrepeated(string s)
{
    // Input: abcdabcd
    // Output: a
    int n = s.length();
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        f = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                f = i;
                break;
            }
        }
    }
    cout << s[f];

    return 0;
}
int main()
{
    string str = "geeksforgeeks";
    leftrepeated(str);
}