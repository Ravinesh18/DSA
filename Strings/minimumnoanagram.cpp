#include <bits/stdc++.h>
using namespace std;
vector<int> mapping(string s)
{

    vector<int> freq(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    return freq;
}
int minimumnoanagram(string s, string t)
{
    vector<int> freq1 = mapping(s);
    vector<int> freq2 = mapping(t);
    int c = 0, diff = 0;
    int i = 0;
    while (i < 26)
    {
        diff = 0;
        if (freq1[i] != 0)
        {
            if (freq1[i] > freq2[i])
            {
                diff = freq1[i] - freq2[i];
            }
          
        }
          c += diff;
            i++;
    }
    cout << c;
    return 0;
}
int main()
{
    string str = "leetcode", str2 = "practice";
    minimumnoanagram(str, str2);

    return 0;
}


