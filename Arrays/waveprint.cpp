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
    int top = 0, bottom = m - 1, c = 0;
    
    vector<int> vrr;
    while (count < te)
    {
        for (int i = top; i <= bottom && count<te; i++)
        {
            vrr.push_back(arr[i][c]);
            count++;
        }
        c++;
        for (int i = bottom; i >= top && count<te; i--)
        {
            vrr.push_back(arr[i][c]);
            count++;
        }
        c++;
    }
    for (int i = 0; i < te; i++)
    {
        cout << vrr[i] << " ";
    }
}