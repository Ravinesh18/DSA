#include <bits/stdc++.h>
using namespace std;
int longestuncommon(string a, string b)
{
    if (a == b)
    {
        return -1;
    }

    return max(a.length(), b.length());
}
int main()
{
    string a = "aba", b = "cdc";
    int n = longestuncommon(a, b);
    cout << n;
    return 0;
}