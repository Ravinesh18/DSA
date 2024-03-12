#include <iostream>
using namespace std;
int main()
{
    int n , m;
    cin >> n;
    for (int i = 1; i < n / 2; i++)
    {
        if (i * i == n)
        {
            m=i*i;
            cout << "Square No.";
            break;
    }
        }
        if(m!=n){
            cout << "Not Square No.";
        }
}