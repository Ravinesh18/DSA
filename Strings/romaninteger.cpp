#include <bits/stdc++.h>
using namespace std;
string intToroman(int n)
{
    vector<string> s = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    vector<int> value = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string ans = "";
    int i = value.size() - 1;
    while (i >= 0)
    {
        if (n < value[i])
        {
            i--;
        }
        else
        {
            ans += s[i];
            n -= value[i];
        }
        
    }
    return ans;
    
}
int main()
{
    int num = 1994;
    string s = intToroman(num);
    cout << s;
    return 0;
}