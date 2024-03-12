#include <bits/stdc++.h>
using namespace std;
int romanToint(string s)
{
   int sum = 0;
 int n = s.length()-1;
    for (int i = n; i >=0; i--)
    {
        if (s[i] == 'I')
            sum += 1;
        else if (s[i] == 'V')
        {
            if (i > 0 && s[i - 1] == 'I')
            {
                sum += 4;
                i--;
            }
            else
            {
                sum += 5;
            }
        }

        else if (s[i] == 'X')
        {
            if (i > 0 &&s[i - 1] == 'I')
            {
                sum += 9;
                i--;
            }
            else
            {
                sum += 10;
            }
        }

        else if (s[i] == 'L')
        {
            if (i > 0 &&s[i - 1] == 'X')
            {
                sum += 40;
                i--;
            }
            else
            {
                sum += 50;
            }
        }
        else if (s[i] == 'C')
        {
            if (i > 0 &&s[i - 1] == 'X')
            {
                sum += 90;
                i--;
            }
            else
            {
                sum += 100;
            }
        }

        else if (s[i] == 'D')
        {
            if (i > 0 &&s[i - 1] == 'C')
            {
                sum += 400;
                i--;
            }
            else
            {
                sum += 500;
            }
        }

        else
        {
            if (i > 0 &&s[i - 1] == 'C')
            {
                sum += 900;
                i--;
            }
            else
            {
                sum += 1000;
            }
        }
    }
    return sum;
}
int main()
{
    string s = "MCMXCIV";
    int n = romanToint(s);
    cout << n;
    return 0;
}