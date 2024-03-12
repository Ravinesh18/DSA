#include <bits/stdc++.h>
using namespace std;
bool robotreturn(string s)
{

    int n = s.length();
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
            y++;
        else if (s[i] == 'D')
            y--;
        else if (s[i] == 'R')
            x++;
        else
            x--;
    }

    if (x==0 && y==0)
    {
        cout<<"At origin";
    }
    else{
        cout<<"Not at origin";
    }
    return true ;
}

int main()
{
    string s = "LL";
    robotreturn(s);
    return 0;
}