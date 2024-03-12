#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6};
    vector<int> arr3 = {5, 3, 7, 8};
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            for (int k = 0; k < arr3.size(); k++)
            {
                if (arr1[i] == arr2[j] && arr2[j]==arr3[k])
                    cout << arr1[i]<<" ";
            }
        }
    }
}
