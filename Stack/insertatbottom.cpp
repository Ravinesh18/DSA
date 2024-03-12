#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int topelement = s.top();
    s.pop();

    solve(s, target);

    s.push(topelement);
}
void insertatBottom(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int target = s.top();
    s.pop();

    solve(s, target);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    insertatBottom(s);

    cout << "Printing : ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}