#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            if (j == 0)
                cout << j + 1;
            else if (j == 2*i)
                cout << i + 1;
            else
            {
                    cout<<" ";
            }
        }
        cout << endl;
    }
    for(int i=0;i<=n;i++){
        cout<<i+1<<" ";
    }
}