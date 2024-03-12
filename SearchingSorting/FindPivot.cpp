#include <bits/stdc++.h>
using namespace std;
int FindPivot(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s==e)
        {
            return s;
        }
        if (mid <= e && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid-1 >= s && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[s] > arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    vector<int> arr{9, 10, 2, 4, 6, 8};
    int ans = FindPivot(arr);
    cout << ans;

    return 0;
}