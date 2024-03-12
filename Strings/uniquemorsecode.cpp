// [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]

#include <bits/stdc++.h>
using namespace std;
int uniquemorsecode(string s)
{
    string codes[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            char c = tolower(s[i]);
            int n  = c - 97;
            res += codes[n];
        }
    }
    cout << res;

    return 0;
}

int main()
{

    string str = "Tin";
    uniquemorsecode(str);

    return 0;
}

