#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}};
    vector<vector<int>> vrr(arr[0].size(), vector<int>(arr.size(), 0));
    int n = arr.size() - 1;
    int a = 0, b = 0;
    for (int i = 0; i <= n; i++)
    {
        b = 0;
        for (int j = n; j >= 0; j--)
        {
            vrr[a][b] = arr[j][i];
            b++;
        }
        a++;
    }

    for (int i = 0; i < vrr.size(); i++)
    {
        for (int j = 0; j < vrr[0].size(); j++)
        {
            cout << vrr[i][j] << "  ";
        }
        cout << endl;
    }
}