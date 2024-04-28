#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[] , int n , int i){
    int l = 2*i;
    int r = 2*i+1;
    int largest = i;
    if (l<=n && arr[largest]<arr[l])
    {
        largest = l;
    }
    
    if (r<=n && arr[largest]<arr[r])
    {
        largest = r;
    }

    if (largest!=i)
    {
        swap(arr[largest],arr[i]);
        i = largest;
        heapify(arr , n , i);
    }
    
    
}
void buildHeap(int arr[] , int n){
    
    for (int i = n/2; i > 0; i--)
    {
        heapify(arr , n , i);
    }
}
int main(){
    int arr[] = {-1 , 12 , 15 , 13 , 11 , 14};
    int n = 6;
    buildHeap(arr , n);
    cout<<"Printing Heap Elements : "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
} 