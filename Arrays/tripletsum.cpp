#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 5, 7, 2, 4, 6};
    int target = 13;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                cout << "(" << arr[i] << "," << arr[j] <<","<< arr[k] << ")  ";
            }
        }
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum == target)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}