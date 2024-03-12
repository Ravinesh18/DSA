#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{4, 5, 6, 7, 8};
    int sizea = arr.size(), sizeb = brr.size();
    vector<int> crr;
    int ele = 0;

    for (int i = 0; i < sizea; i++)
    {
        ele = arr[i];
        for (int j = 0; j < sizeb; j++)
        {
            if (ele == brr[j])
            {
                //if there are duplicate in one array and not in another then do brr[j]=-1;
                brr[j]=-1;
                crr.push_back(ele);
            }
        }
    }
    cout << "Intersection Elements are: ";
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i]<<" " ;
    }

    return 0;
}