#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int &i)
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest = i;
    if (l <= n && arr[largest] < arr[l])
    {
        largest = l;
    }

    if (r <= n && arr[largest] < arr[r])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        i = largest;
        heapify(arr, n, i);
    }
}
void buildHeap(int arr[], int n)
{

    for (int i = n / 2; i >0; i--)
    {
        heapify(arr, n, i);
    }
}
void solve(int merged[] , int arr1[], int arr2[], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        merged[n+i] = arr2[i];
    }
    
    buildHeap(merged , n+m-1);
    
}
int main()
{

    int arr1[] = {2, 4, 1, 6, 12, 7, 99, 45};
    int arr2[] = {32, 44, 21, 56, 13, 9, 5};

    int n = 8;
    int m = 7;

    int merged[n+m];

    solve(merged , arr1, arr2 , n , m);

    for (int i = 0; i < n+m; i++)
    {
        cout<<merged[i]<<" ";
    }
    

    return 0;
}