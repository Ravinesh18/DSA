#include<bits/stdc++.h>
using namespace std;
void printdigit(int n){
    
if (n<=0)
{
    return;
}
int d = n%10;
cout<<d<<" ";
printdigit(n/10);
}
int main(){
    int n = 1234;
    int d = 0;
    printdigit(n);
    return 0;
}