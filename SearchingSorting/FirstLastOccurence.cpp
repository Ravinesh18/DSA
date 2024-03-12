#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>arr , int n , int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if (arr[mid]==target)
        {
            ans  = mid;
            e = mid-1;  
        }
        else if (arr[mid]<target)
        {
            s = mid+1;
            
        }
        else{
            e = mid - 1;
        }


        mid = s+(e-s)/2;
    }
    
    return ans;
}
int LastOccurence(vector<int>arr , int n , int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if (arr[mid]==target)
        {
            ans  = mid;
            s = mid+1;  
        }
        else if (arr[mid]<target)
        {
            s = mid+1;
            
        }
        else{
            e = mid - 1;
        }


        mid = s+(e-s)/2;
    }
    
    return ans;

}
int main(){
    vector<int>arr {1,2,3,4,5,5,5,5,6,6,6,7};
    int n = arr.size();
    int tar1 = 11;
    int tar2 = 6;

    int ans1 = firstOccurence(arr,n,tar1);
    cout<<"First Occurence of "<<tar1<<" : "<<ans1<<endl;
    int ans2 = LastOccurence(arr,n,tar2);
     cout<<"Last Occurence of "<<tar2<<" : "<<ans2;

    return 0;
}