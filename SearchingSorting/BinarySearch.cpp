#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> arr, int n, int target)
{
int s = 0 ;
int e = n-1;
int mid = s+(e-s)/2;

while(s<=e){
    if (arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target){
    e = mid-1;
    }
    else{
    s = mid+1;
    }
    mid = s + (e-s)/2;
}
    return -1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = arr.size();
    int target = 4;
    int index = BinarySearch(arr, n, target);
    if (index == -1)
    {
        cout << "Not Found!" << endl;
    }
    else
    {
        cout << "Found at index = " << index + 1 << endl;
    }

    return 0;
}