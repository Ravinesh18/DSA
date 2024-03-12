#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            c=c+i;
    }
    if(c==n)
    cout<<"Perfect Number";
    else
    cout<<"Not  perfect no.";
    }