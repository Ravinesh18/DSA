#include <bits/stdc++.h>
using namespace std;
int main()
{

    deque<int> d;
    d.push_front(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);

    // cout<<d.size()<<endl;
    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;

    d.pop_back();
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    cout << d.front() << endl;
    cout << d.back() << endl;


    return 0;
}