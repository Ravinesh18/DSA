#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n;
    int c = 0;
    int ans=0,a=0;
    while (m != 0)
    {
        m = m / 10;
        c++;
    }
    m=n;
    while (m != 0)
    {
        a = m % 10;
        ans = ans + pow(a,c);
        m=m/10;
    }
    if(ans==n)
    cout<<"Armstrong Number";
    else
    cout<<"Not an Armstrong Number";
}