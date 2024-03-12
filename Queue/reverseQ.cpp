#include <bits/stdc++.h>
using namespace std;
void reverse(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

    while (!s.empty())
    {
        int t = s.top();
        s.pop();
        q.push(t);
    }
}
void reverseUsingRecurrsion(queue<int> &q)
{
    if (q.empty())
    {
        return ;
    }
    
    
    int temp = q.front();

    q.pop();

    reverseUsingRecurrsion(q);

    q.push(temp);

}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverseUsingRecurrsion(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}