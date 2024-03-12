#include <iostream>
#include <string>
using namespace std;
duplicates(string st){
    int l = st.length();
    int c = 0;
    cout << "Duplicates Character in a given string : " << endl;
    for (int i = 0; i < l; i++)
    {
        c = 1;
        for (int j = i + 1; j < l; j++)
        {
            if (st[i] == st[j] && st != " ")
            {
                c++;
                st[j] = '0';
            }
        }
        if (c > 1 && st[i] != '0')
        {
            cout<<st[i]<<endl;
        }
    }
    
}

int main()
{
    string str = "test string";
    duplicates(str);
    return 0;
}