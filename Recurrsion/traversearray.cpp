#include<bits/stdc++.h>
using namespace std;
void traverseArray(int arr[] , int n , int i){
    if(n==0)
    return ;
    if(i>=n)
    return;

    cout<<arr[i]<<" ";
    traverseArray(arr , n, i+1);

}
int main(){
int arr[5] = {1,2,3,4,5};
int n  = 5 ;
int i =0;
traverseArray(arr , n , i);
    return 0;
}