// // Check whether two strings are rotation of each other
#include <bits/stdc++.h>
using namespace std;
int isrotation(string st1, string st2)
{
    if (st1.length() != st2.length())
    {
        return 0;
    }

    string temp = st1 + st2;
    int n = temp.length();
    int m = st2.length();
    for (int i = 0; i < n - m; i++)
    {
        int f = 1, j = 0;
        for (j = 0; j < m - 1; j++)
        {
            if (st2[j] != temp[i + j])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string str1 = "ABCD", str2 = "ACBD";
    if (isrotation(str1, str2))
    {
        cout << "Strings are rotation of each other";
    }
    else
    {
        cout << "Strings are not rotation of each other";
    }
    return 0;
}