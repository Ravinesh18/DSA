#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 2};
    int n = arr.size(), c = 0;
    cout << "Leaders of Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        c = 0;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                c++;
            }
        }
        if (c == n - i-1)
            cout << arr[i] << " ";
    }
}