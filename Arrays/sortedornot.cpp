#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 5, 6, 9, 10, 44, 6, 75};
    int flag = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            flag = 1;
        }
    }
    if (flag==0)
    {
        cout<<"Sorted Array";
    }
    else{
        cout<<"Not Sorted Array";
    }
  return 0;  
}