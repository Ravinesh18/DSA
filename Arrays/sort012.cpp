//Dutch National Flag Problem 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> arr{1, 2, 0, 1, 0, 2, 1, 0, 2, 1, 0};
   int n = arr.size();
   cout << "Elements are : ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
   int j = 0, r = n - 1;
   for (int i = 0; i <= n && i<=r;)
   {
      if (arr[i] == 0)
      {
         swap(arr[j], arr[i]);
         j++;
         
      }
      else if (arr[i] == 2)
      {
         swap(arr[i], arr[r]);
         r--;
         
      }
      else
      {
         i++;
      }
   }
   cout << "Elements are : ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}
