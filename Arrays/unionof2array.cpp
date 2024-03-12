#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int brr[] = {5, 6, 7, 8};
    int sizea = 4, sizeb = 4;

    vector<int> crr;
    for (int i = 0; i < sizea; i++)
    {
        crr.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        crr.push_back(brr[i]);
    }
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    return 0;
}