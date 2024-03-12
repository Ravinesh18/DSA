#include <iostream>
using namespace std;
#include<limits.h>

//(bits/stdc++.h)-----This header files include all the files
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    cout<<"Maximum: "<<max<<endl;;
    cout<<"Minimum: "<<min;
}