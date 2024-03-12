#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // row-wise representation
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Max Element
    int max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    //Min Element
    int min = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    cout<<"Max Element: "<<max<<endl;
    cout<<"Min Element: "<<min;
}