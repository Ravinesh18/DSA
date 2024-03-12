#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n;
    int r=0, reverse=0;
    while (m != 0)
    {
        r = m % 10;
        reverse = (reverse*10)+r;
        m = m / 10;
    }
    if (reverse == n)
        cout << "Palindrome No.";
    else
        cout << "Not a Palindrome No.";
}