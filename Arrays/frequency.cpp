#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10};
    int c = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        
        if (arr[i] == arr[i + 1])
        {
            c++;
        }
        else
        {
            cout << "Frequency of " << arr[i] << " = " << c << endl;
            c=1;
        }
    }
}