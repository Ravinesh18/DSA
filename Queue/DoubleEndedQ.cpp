#include <bits/stdc++.h>
using namespace std;
class DeQ
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    DeQ(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push_Rear(int data)
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
    void push_front(int data)
    {
        if (rear == size - 1 && front == 0)
        {
            cout << "Full !" << endl;
        }
        else if (front == -1)
        {
            rear = front = 0;
            arr[front] = data;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = data;
        }
        else
        {
            front--;
            arr[front] = data;
        }
    }
    void pop_Rear()
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
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
    }
    void pop_front()
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
};
int main()
{

    return 0;
}
