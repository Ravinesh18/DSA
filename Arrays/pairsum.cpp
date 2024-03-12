#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 5, 7, 2, 4, 6};
    int target = 9;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")  ";
        }
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                cout << arr[i] << " " << arr[j]<<endl;
            }
        }
    }
}