#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr{9, 6, 8, 3, 4, 1, 5};
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int fac = 1;
    for (int i = 1; i <= max; i++)
    {
        fac = fac * i;
    }
    cout << "Factorial of Largest No. " <<fac;
}