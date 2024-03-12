#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
        for (int i = 0; i < size; i++)
        {
            arr[i]=0;
        }
        
    }

    void push(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void pop()
    {
        if (top1 == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            top1--;
        }
    }
    void gettop()
    {
        if (top1 == -1)
        {
            cout << "No Element on the top!" << endl;
        }
        else
        {
            cout << arr[top1];
        }
    }

    bool isempty()
    {
        if (top1 == -1)
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
        return top1 + 1;
    }

    void push2(int data)
    {

        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop2()
    {
        if (top2 == size - 1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            top2++;
        }
    }
    void gettop2()
    {
        if (top2 == size - 1)
        {
            cout << "No Element on the top!" << endl;
        }
        else
        {
            cout << arr[top2];
        }
    }

    bool isempty2()
    {
        if (top2 == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getsize2()
    {
        return top2 - 1;
    }

    void print()
    {
        cout << endl;
        cout << "Top1 : " << top1 << endl;
        cout << "Top2 : " << top2 << endl;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{

    Stack s(10);
    s.push(1);
    s.print();
    s.push(2);
    s.print();
    s.push(3);
    s.print();
    s.push(4);
    s.print();
    s.push(5);
    s.print();

    s.push2(6);
    s.print();
    s.push2(7);
    s.print();
    s.push2(8);
    s.print();
    s.push2(9);
    s.print();
    s.push2(0);
    s.print();

    return 0;
}
