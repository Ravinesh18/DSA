#include <bits/stdc++.h>
using namespace std;
class CircularQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int data)
    {
        if (rear == size - 1 && front == 0)
        {
            cout << "Full !" << endl;
        }
        else if (front == -1)
        {
            rear = front = 0;
            arr[rear] = data;
        }
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void pop()
    {
        if (front == -1)
        {
            cout << "Empty !" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    // int getfront()
    // {
    //     if (front == -1)
    //     {
    //         cout << "Empty !" << endl;
    //         return -1;
    //     }
    //     else
    //     {
    //         return arr[front];
    //     }
    // }
    // bool isempty()
    // {
    //     if (front == -1)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }
};
int main()
{

    CircularQueue q(6);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // cout << "Front: " << q.getfront() << endl;

    // cout << "Printing : ";
    // while (!q.isempty())
    // {
    //     cout << q.getfront() << " ";
    //     q.pop();
    // }
    q.pop();
    q.push(7);



    return 0;
}