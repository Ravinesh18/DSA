#include<bits/stdc++.h>
using namespace std;
string solve(string s){
int fre[26]={0};
string ans = "";
queue<int> q;
for (int i = 0; i < s.length(); i++)
{
char ch  = s[i];

q.push(ch);

fre[ch-'a']++;

while (!q.empty())
{
    if (fre[ch-'a']>1)
    {
        q.pop();
    }
    else{
        ans.push_back(q.front());
        break;
    } 
}
if (q.empty())
{
    ans.push_back('#');
}
}

return ans;
}

int main(){
string s = "aabc";
string ans = solve(s);
cout<<"Final answer : "<<ans;

    return 0;
}