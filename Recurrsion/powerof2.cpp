#include <bits/stdc++.h>
using namespace std;
int powerof2(int n , int nums)
{
    int ans  = nums;
    if (n == 0)
        return 1;
    if (n == 1)
    {
        return nums;
    }
    ans = ans*powerof2(n-1 , nums);

    return ans;
}
int main()
{
    int n = 10;
    int no = 2;
    int ans = powerof2(n , no);
    cout << ans;
    return 0;
}