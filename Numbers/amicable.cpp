#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int c = 0, d = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            c = c + i;
        if (m % i == 0)
            d = d + i;
    }
    if(d==n&&c==m)
    cout<<"Amicable No.";
    else
    cout<<"Not an Amicable No.";
}