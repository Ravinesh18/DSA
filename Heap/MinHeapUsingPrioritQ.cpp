#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int , vector<int> , greater<int>>pq;

    pq.push(3);
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(7);
    pq.push(1);

    cout<<"Size : "<<pq.size()<<endl;

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    
    if (pq.empty())
    {
        cout<<"Empty!"<<endl;
    }
    else{
        cout<<"False!"<<endl;
    }

    return 0;
}