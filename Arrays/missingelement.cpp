#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr{5,3,9,2,11};
    sort(arr.begin(), arr.end());
    int a = arr[0];
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        
        if (a != arr[i])
        {
            cout << a << " ";
            i--;
        }
        a++;
    }
    return 0;
}