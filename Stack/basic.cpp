#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Stack through STL ->>>>>PUSH--POP--TOP--EMPTY--SIZE--PRINT
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();

    cout << "Element at Top is : " << st.top() << endl;
    cout << "Size of Stack : " << st.size() << endl;

    if (st.empty())
    {
        cout<<"Stack is Empty!"<<endl;
    }
    else{
        cout<<"Stack is not Empty!"<<endl;
    }
    
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    

    return 0;
}