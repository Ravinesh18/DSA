#include<bits/stdc++.h>
using namespace std;
//Memoization Method
int f(int n , vector<int>&dp){
    if(n<=1)
    return n;

    if(dp[n]!=-1)
    return dp[n];

    return dp[n] = f(n-1 , dp) + f(n-2,dp);

}

//Tabulation Method
int f2(int n){
    //O(N) Space
    // vector<int>dp(n+1);
    // dp[0] = 0;
    // dp[1] = 1;
    // for(int i=2;i<=n;i++){
    //     dp[i] = dp[i-1] + dp[i-2];
    // } 
    // return dp[n];


    //Space Optimization
    int prev2 = 0 ;
    int prev = 1;
    for(int i=2;i<=n;i++){
        int cur = prev2 + prev;
        prev2 = prev;
        prev = cur;
    }

    return prev;
}
int main(){
    int n=5;
    vector<int>dp(n+1 , -1);
    cout<<f(n , dp);
    cout<<f2(n);
    
    return 0;

}