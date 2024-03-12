#include<bits/stdc++.h>
using namespace std;
int climbstaircase(int n){
if (n==0)
{
    return 0 ;
}
if (n==1)
{
    return 1;
}
if (n==2)
{
    return 2;
}

int ans = climbstaircase(n-1)+climbstaircase(n-2);

return ans;
}
int main(){
int n = 4;
int ans = climbstaircase(n);
cout<<ans;
    return 0;
}