#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n , int j , int m)
{
    if(j>m)
    return -1;

    int mid = (j+m)/2;
    if (arr[mid]==n)
    {
        return mid ;
    }
    
    if(n>arr[mid]){
    j = mid+1;
    // mid = (j+m)/2;
    }
    else if (n<arr[mid])
    {
        m = mid-1;
        // mid = (j+m)/2;
    }
    
    return binarysearch(arr , n , j , m);
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int m = 6;
    int n = 1;
    int j = 0;
    int i = binarysearch(arr, n ,j , m);
    if (i == -1)
    {
        cout << "Not Found!";
    }
    else
    {
        cout << "Found at index : "<<i;
    }
    return 0;
}