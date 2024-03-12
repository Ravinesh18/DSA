#include<bits/stdc++.h>
using namespace std;
int occurenceofsubstr(string s , string target){
int n = s.length();
int ind = s.find(target);
int m = target.length(); 
while(ind!=string::npos){
        s.erase(ind , m);
        ind = s.find(target);
}
cout<<s;

return 0;

}

int main(){
string  str = "daabcbaabcbc", part = "abc" ;
occurenceofsubstr(str , part);
return 0;

}


