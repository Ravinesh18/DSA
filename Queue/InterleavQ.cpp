#include <bits/stdc++.h>
using namespace std;
void interleaveQ( queue<int> &q)
{
    int n = q.size();
    int k = n / 2;
    queue<int> r;
    int i = 0;
    while (i < k)
    {
        int temp = q.front();
        q.pop();
        r.push(temp);
        i++;
    }

    i = 0;
    while (!r.empty() && !q.empty())
    {
        int temp = r.front();
        r.pop();

        q.push(temp);


        int temp2 = q.front();
        q.pop();
        q.push(temp2);
        
    }
    if(n&1){
        int e = q.front();
        q.pop();
        q.push(e);
    }
    
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    interleaveQ(q);


    cout<<"Printing : ";
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}