#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{0, 6, 8, 9, 11},
                 {20, 22, 28, 29, 31},
                 {36, 38, 50, 61, 63},
                 {64, 66, 100, 122, 128}};
    int x = 31;
    int f = 0 ;
    int index = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == x)
            {
                f = 1;
                index  = ((i+1)*10)+(j+1);
                break;
            }
        }
    }

    if (f==1)
    {
    cout<<"Element Found at index : "<<index;
    }
    else{
        cout<<"Element not found !";
    }
    
}