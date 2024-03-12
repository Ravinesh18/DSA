#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    cin >> n;

    for (i = 1; sum < n; i++)
    {
        sum += i;
    }

    if (sum == n)
    {
        cout << "Triangular Number" << endl;
    }
    else
    {
        cout << "Not a Triangular Number" << endl;
    }

    return 0;
}
