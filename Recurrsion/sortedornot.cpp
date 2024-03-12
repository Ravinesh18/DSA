#include <bits/stdc++.h>
using namespace std;
bool SortedorNot(int arr[], int n, int i)
{

    if (n == 0)
        return false;

    if (i >= n)
        return true;
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
   
  return SortedorNot(arr, n, i + 1);
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5 ,0};
    int n = 6;
    int i = 0;
    bool c = SortedorNot(arr, n, i);
    if (c)
    {
        cout << "Sorted!";
    }
    else
    {
        cout << "Not Sorted!";
    }

    return 0;
}