// Count Say Problem
#include <bits/stdc++.h>
using namespace std;
string countsay(int n)
{
    if (n == 1)
    {
        return "1";
    }
}
    string res ;
    string say = countsay(n - 1);
    int counter = 1;

    for (int i = 1; i < say.length(); i++)
    {
        counter++;
        if (i == say.length() - 1 || say[i] != say[i+1])
        {
            res+= to_string(counter) + say[i+1];
            counter = 0;
        } 
    }
    cout << say;
    return res;

int main()
{
    int m = 4;
    countsay(m);

    return 0;
}