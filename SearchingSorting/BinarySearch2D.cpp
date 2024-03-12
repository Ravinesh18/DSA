#include <bits/stdc++.h>
using namespace std;
int TwoDBinarySearch(vector<vector<int>>arr , int target){
    int n= arr.size();
    int m = arr[0].size();
    int total = n*m;
    int s = 0;
    int e = total-1;
    int mid = s+ (e-s)/2;

    while (s<=e)
    {
        int r = mid/m;
        int c= mid%m;
        int element = arr[r][c];
        if (element==target)
        {
            return (mid/m*10)+mid%m;
        }
        else if (element>target)
        {
            e = mid-1;
        }
        else{
            s= mid+1;
        }
        mid= s+(e-s)/2;
    }

    return (mid/m*10)+mid%m;
    
    
}
int main()
{
    vector<vector<int>>arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = arr.size();
    int target = 11;
    int ans = TwoDBinarySearch(arr , target);
    cout<<ans;


    return 0;
}