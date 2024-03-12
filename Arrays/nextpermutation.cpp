#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr{2,4,1,7,5,0};
    int n = arr.size();
    int f = 0;
    int max = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            max = arr[i - 1];
            f = i - 2;
        }
    }

    int min = INT_MAX;
    int r = 0;
    for (int i = f + 1; i < n; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
            r = i;
        }
    }

    swap(arr[f], arr[r]);

    int start = f + 1, end = r;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i] << " ";
    }

    return 0;
}