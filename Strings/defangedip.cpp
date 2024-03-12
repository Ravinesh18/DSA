#include<iostream>
#include<string>
using namespace std;
defangip(string st){
string defangip;

    for (char c : st)
    {
        if (c=='.')
        {
            defangip+= "[.]";
        }
        else{
            defangip+=c;
        }
    }
    cout<<defangip;
}
int main(){
    string str = "255.100.50.0";
    defangip(str);
}