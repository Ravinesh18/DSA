#include <bits/stdc++.h>
using namespace std;
class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        size = 0;
    }

    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;

        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }
};
int main()
{
    Heap h;
    h.arr[0] = 100;
    h.arr[1] = 20;
    h.arr[2] = 30;
    h.arr[3] = 40;
    h.arr[4] = 50;
    h.size = 4;
    cout << "Pritning the Heap Elements : " << endl;

    for (int i = 0; i <=h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout<<endl;

    h.insert(110);

    for (int i = 0; i <=h.size; i++)
    {
        cout << h.arr[i] << " ";
    }

    return 0;
}