#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {//stars
        cout<<"* ";
        }
        for (int j = 0; j < 2*n-2*(i+1) ; j++)
        {//spaces
        cout<<"  ";
        }
        for (int j = 0; j < i + 1; j++)
        {//stars
        cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {//stars
        cout<<"* ";
        }
        for (int j = 0; j < 2*(i+1) ; j++)
        {//spaces
        cout<<"  ";
        }
        for (int j = 0; j < n-i - 1; j++)
        {//stars
        cout<<"* ";
        }
        cout<<endl;
    }
}