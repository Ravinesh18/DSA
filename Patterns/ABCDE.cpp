#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    char ch;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            a = j;
            ch = a + 'A';
            cout << ch << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            ch--;
            cout << ch <<" ";
        }

        cout << endl;
    }
}