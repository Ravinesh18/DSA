#include <bits/stdc++.h>
using namespace std;
int maxdiff(vector<int> arr)
{
    int min = INT_MAX, max = INT_MIN, a, b;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
        }
    }

    return -1;
}
int main()
{
    vector<int> arr{1, 2, 90, 10, 110};
    int n = maxdiff(arr);

    return 0;
}
