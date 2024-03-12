#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (start > end)
            break;
        else
        {
            if (start < end)
            {
                cout << a[start] << " ";
                cout << a[end] << " ";
            }
            if(start==end)
            cout<<a[start]<<" ";
                start++;
                end--;
        
        }
    }
}