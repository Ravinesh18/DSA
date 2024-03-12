#include <bits/stdc++.h>
using namespace std;
string reverseonlyletters(string s)
{
    int start = 0;
    int end = s.length();
    while (start<=end)
    {
        if (isalpha(s[start]) && isalpha(s[end]))
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        else if (!isalpha(s[start]) && !isalpha(s[end]))
        {
            start++;
            end--;
        }
        else if(!isalpha(s[start])){
            start++;
        }
        else{
            end--;
        }
        
        
    }
    

    return s;
}
int main()
{
    string s = "a-bC-dEf-ghIj";
    string str = reverseonlyletters(s);
    cout<<str;
    return 0;
}