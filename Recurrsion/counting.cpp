#include <bits/stdc++.h>
using namespace std;
void count(int n)
{
    int i = n ;
    if(n==0){
    cout<<"0";
    return;
    }
    
    cout<<i<<" ";
    count(n - 1);
    
}
int main()
{
    int n = 5;
    count(n);
 
    return 0;
}