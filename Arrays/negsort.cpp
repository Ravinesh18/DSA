#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{-1, 2, -3, 4, 5, 6, -7, 8, 9};
    cout << "Elements are : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    int n = arr.size() - 1;
    int low = 0 , high = n;
    for (int i = 0; i < n; i++)
    {
        if (arr[low] < 0)
        {
            low++;
        }
    
        else if(arr[high] > 0)
        {
            high--;
        }
        else{
            swap(arr[low],arr[high]);
        }
    }
    cout << "Elements are : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}