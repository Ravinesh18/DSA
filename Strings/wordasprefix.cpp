#include <bits/stdc++.h>
using namespace std;
int wordasprefix(string s, string search)
{
    int m = search.length();
    int c = 1;
    string sub;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            c++;
        else
        {
            if (i == 0 || s[i - 1] == ' ')
            {
                sub = s.substr(i, m);
                if (sub == search)
                {
                    return c;
                }
            }
        }
    }
    return -1;
}
int main()
{
    string sentence = "i love eating burger", searchWord = "burg";
    int a = wordasprefix(sentence,searchWord);
    if (a == -1){
        cout<<"Not found\n";
    }
    else
        cout<<"Found at "<<a;
    
    return 0;
}