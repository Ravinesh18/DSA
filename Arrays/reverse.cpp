#include <iostream>
using namespace std;
int main()
{       
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int b[100]; 
    int m =0;   
    for (int i = n-1; i>=0; i--)
    {
        b[m]=a[i];
        m++;
    }for (int i = 0; i < m; i++)
    {
    cout<<b[i]<<" ";
    
    }
    
}