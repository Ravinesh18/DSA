#include <iostream>
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

    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum=0;
        for (int j = 0; j < 3; j++)
        {
          sum=sum+arr[i][j];  
        }
        cout<<"Row "<<i+1<<" Sum: "<<sum<<endl;
        
    }
    
}