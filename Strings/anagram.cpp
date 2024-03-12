#include <bits/stdc++.h>
using namespace std;
int isAnagram(string s1, string s2)
{
    // Input: str1 = “listen”  str2 = “silent”
    int n1 = s1.length();
    int n2 = s2.length();
    int c = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j =0 ; j < n2; j++)
        {
            if (s1[i] == s2[j])
            {
                c++;
            }
        }
    }

    if (c == n1)
    {
        cout << "Its an anagram string";
    }
    else
    {
        cout << "Not an anagram string";
    }
}

int main()
{
    string str1 = "gram";
    string str2 = "mare";
    isAnagram(str1, str2);
}