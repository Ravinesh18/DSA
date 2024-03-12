#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{8, 4, 2, 1};
    int n = arr.size();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i]>arr[j]){
            cout << arr[i] << " , " << arr[j] << endl;
            c++;
            }
        }
    }

    cout<<"Counting Inversion : "<<c; 
}
