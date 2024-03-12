#include <bits/stdc++.h>
using namespace std;
int increasedecrese(string s)
{
    int freq[26] = {0};
    int n = s.length();
    string res;
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 97]++;
    }

    while (n != 0)
    {
        for (int i = 0; i < 26; i++)    //aaabbbccc
        {
            if (freq[i] >= 1)
            {
                res += (char)(i + 97); //abccbaabc
                n--;
                freq[i]--;
            }
        }
        for (int i = 25; i >= 0; i--)
        {
            if (freq[i] >= 1)
            {
                res += (char)(i + 97); ///abccbaabccba
                n--;
                freq[i]--;
            }
        }
    }

    cout << res;

    return 0;
}

int main()
{
    string str = "aaaabbbbcccc";
    increasedecrese(str);
    return 0;
}