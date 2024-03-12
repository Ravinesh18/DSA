#include <bits/stdc++.h>
using namespace std;
int FindSQRT(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            s = mid + 1;
            ans  = mid;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n = 22;

    double ans = FindSQRT(n);
    int precision = 11;
    double step = 0.1;
     for (int i = 0; i < precision; i++)
    {
        for (double j = ans ; j*j<=n ; j = j+step)
        {
            ans = j;
            
        }
        step = step/10;
        
    }
     
    cout<<ans;

    return 0;
}