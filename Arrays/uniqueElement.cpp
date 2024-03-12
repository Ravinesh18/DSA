#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> a)
{
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        ans = ans ^ a[i];
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int uniqueEle = findUnique(arr);

    cout << "Unique Element: " << uniqueEle << endl;
    return 0;
}