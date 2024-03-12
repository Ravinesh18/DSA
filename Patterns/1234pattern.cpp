#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            if(j==i)
            cout<<i+1;
            else
            cout<<i+1<<"*";

        }
        cout<<endl;
    
    }
    int c=n;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j <n-i; j++)
        {
            if(j==n-i-1)
            cout<<c;
            else
            cout<<c<<"*";

        }
        c--;
        cout<<endl;
    
    }
    
}