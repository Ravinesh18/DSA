#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return -1;
        }
        i++;
        j--;
    }
    return 0;
}

int validpalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            // Use logical OR to combine the results of the two function calls
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
        else
        {
            i++;
            j--;
        }
    }

    return 0;
}

int main()
{
    string s = "abc";
    int result = validpalindrome(s);
    
    if (result == 0)
    {
        cout << "The string can be converted into a palindrome by removing at most one character." << endl;
    }
    else
    {
        cout << "The string cannot be converted into a palindrome by removing at most one character." << endl;
    }

    return 0;
}
