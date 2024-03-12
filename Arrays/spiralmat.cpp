#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}};

    int m = arr.size();
    int n = arr[0].size();
    int te = m * n;
    int count = 0;
    int sr = 0, ec = n - 1, er = m - 1, sc = 0;
    vector<int> vrr;
    while (count < te)
    {
        for (int i = sc; i <= ec && count < te; i++)
        {
            vrr.push_back(arr[sr][i]);
            count++;
        }
        sr++;

        for (int i = sr; i <= er && count < te; i++)
        {
            vrr.push_back(arr[i][ec]);
            count++;
        }
        ec--;

        for (int i = ec; i >= sc && count < te; i--)
        {
            vrr.push_back(arr[er][i]);
            count++;
        }
        er--;

        for (int i = er; i >= sr && count < te; i--)
        {
            vrr.push_back(arr[i][sc]);
            count++;
        }
        sc++;
    }
    for (int i = 0; i < te; i++)
    {
            cout << vrr[i] << " ";
        
    }
}


