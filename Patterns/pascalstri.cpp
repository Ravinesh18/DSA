#include <iostream>
using namespace std;
int main()
{
    int k = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        k=1;
        for (int j = 1; j <= i; j++)
        {

            cout << k;
            k = k * (i - j) / j;
        }

        cout << endl;
    }
}