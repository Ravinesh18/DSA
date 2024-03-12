#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int n = arr.size();
    int target = 0;
    for (int i = n - 1; i > 0; i--)
    {
        target = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = target;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}