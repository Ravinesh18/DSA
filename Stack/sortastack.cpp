#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return;
    }

    int topelement = s.top();
    s.pop();

    solve(s, target);

    s.push(topelement);
}
void sortStack(stack<int> &s)
{

    if (s.empty())
    {
        return;
    }
    int topelement = s.top();
    s.pop();

    sortStack(s);

    solve(s, topelement);
}
int main()
{
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(9);
    s.push(1);
    s.push(4);
    s.push(3);

    sortStack(s);

    cout << "Printing : ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}