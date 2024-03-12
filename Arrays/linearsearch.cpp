#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Enter the element to be searched : ";
    int key;
    cin>>key;
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            flag=1;
        }
    }
    if(flag)
    cout<<"Found";
    else
    cout<<"Not found";
}