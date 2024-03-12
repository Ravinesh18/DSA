#include <bits/stdc++.h>
using namespace std;
int numberofstrings(string s)
{
    unordered_map<char,int> freq;
    int j = 0, count = 0, n = s.length();
    int i = 0;
    while (j < n)
    {
        freq[s[j]]++;
        while (i <= j && freq['a'] >= 1 && freq['b'] >= 1 && freq['c'] >= 1)
        {
            count += n - j;
            freq[s[i]]--;
            i++;
        }
        j++;
    }

    return count;
}

int main()
{
    string s = "aaabc";
    int a = numberofstrings(s);
    cout << a;
    return 0;
}