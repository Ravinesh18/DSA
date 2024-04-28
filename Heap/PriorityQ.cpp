#include<bits/stdc++.h>
using namespace std;
int main(){
    //Max Heap
    priority_queue<int>pq;

    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);
    pq.push(5);
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