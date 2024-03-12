#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full!";
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void pop()
    {
        if (front == rear)
        {
            cout << "Empty!";
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    int getfront()
    {
        if (front == rear)
        {
            cout << "Empty!";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    bool isempty()
    {
        if (front == rear)
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
        return rear - front;
    }
};
int main()
{

    Queue q(6);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout << "Front: " << q.getfront() << endl;
    int n = q.getsize();
    cout << n<<endl;
    cout << "Printing : ";
    while (!q.isempty())
    {
        cout << q.getfront() << " ";
        q.pop();
    }

    return 0;
}