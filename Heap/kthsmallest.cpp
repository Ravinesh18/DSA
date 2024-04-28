#include<bits/stdc++.h>
using namespace std;
int getkthsmallest(int arr[] , int n, int k){
    priority_queue<int>pq;
    int ans = 0;
    
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        int e = arr[i];
        if (e < pq.top())
        {
            pq.pop();
            pq.push(e);
        }
        
    }
    
    
    ans  = pq.top();



    return ans;


}
int main(){
    int arr[] = {10 , 5 , 20 , 5 , 15};
    int n = 5;
    int k =2;
    int ans = getkthsmallest(arr , n , k);
    cout<<ans<<endl;

    return 0;
}