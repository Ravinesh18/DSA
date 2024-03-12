#include<bits/stdc++.h>
using namespace std;
int FINDMAXMIN(int arr[] , int n , int i , int &min){
    
    if(n==0)
    return 0;
    if(i>=n)
    return min;

    if(arr[i]<min){
        min = arr[i];
    }
        
    return FINDMAXMIN(arr , n, i+1 , min);

}
int main(){
int arr[5] = {3,4,6,5,9};
int n  = 5 ;
int i =0;
int min = INT_MAX;
int ans = FINDMAXMIN(arr , n , i , min);
cout<<ans;
    return 0;
}