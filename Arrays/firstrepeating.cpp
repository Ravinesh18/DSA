#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr{2,5,8,1,5,7,9,8};
    sort(arr.begin(),arr.end());
    for(int i =0;i<arr.size();i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}