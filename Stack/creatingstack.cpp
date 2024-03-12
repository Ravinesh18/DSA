#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (top == size-1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            top--;
        }
    }
    void gettop()
    {
        if (top == -1)
        {
            cout << "No Element on the top!" << endl;
        }
        else
        {
            cout << arr[top] ;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getsize()
    {
        return top + 1;
    }
};
int main()
{
    Stack s(10);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.isempty())
    {
        s.gettop();
        cout<<" ";
        s.pop();
    }
    

    return 0;
}