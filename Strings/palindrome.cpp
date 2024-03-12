#include <iostream>
#include <string>
using namespace std;
palindrome(string st)
{
    string st2 = st;
    int i = 0, a = 0;
    int n = st.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(st2[i], st2[n - i - 1]);
    }
}

int main()
{

    string str1 = "abba";
    string str2 = str1;
    palindrome(str1);
    if (str1 == str2)
    {
        cout << "Palindrome String ";
    }
    else
    {
        cout << "Not a palindrome string";
    }

    return 0;
}