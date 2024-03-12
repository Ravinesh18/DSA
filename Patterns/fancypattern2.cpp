#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i)
            {
                cout << a;
                a++;
            }
            else
            {
                cout << a << "*";
                a++;
            }
        }
        cout << endl;
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < 2 * n - i + 1; j++)
    //     {
    //         if (j == i)
    //         {
    //             cout << a;
    //             a--;
    //         }
    //         else
    //         {
    //             cout << a << "*";
    //             a--;
    //         }
    //     }
    //     cout << endl;
    // }
}