#include<bits/stdc++.h>
using namespace std;
 int FindMissingElement(vector<int>arr , int n){
     int s = 0;
     int e = n-1;
     
     int mid, f, l, m;

    while (s <= e){
        mid = s + (e - s) / 2;
        f = arr[0];
        l = arr[n-1];
        m = f + (mid);

        if (arr[mid] == m){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return f + (s);
}

int main(){
vector<int>arr{1,2,3,4,5,6,8,9,10};
int n = arr.size();

int element = FindMissingElement(arr, n);

cout<<"Missing Element is : "<<element<<endl;

    return 0;
}