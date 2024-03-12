#include <iostream>
#include <string>
using namespace std;
reversest(string st)
{
    int n = st.length();
    int i = 0, m = n;
    while (n >= i)
    {
        cout << st[n];
        n--;
    }
}

int main()
{
    string str = "Apple";
    reversest(str);
    return 0;
}