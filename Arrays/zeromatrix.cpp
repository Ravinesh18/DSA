#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{0, 1, 2, 0},
                            {3, 4, 5, 2},
                            {1, 3, 1, 5}};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == 0)
            {

                for (int k = 0; k < arr[i].size(); k++)
                {
                    if (arr[i][k])
                    {
                        arr[i][k] = -1;
                    }
                }

                for (int l = 0; l < arr.size(); l++)
                {
                    if (arr[l][j])
                    {
                        arr[l][j] = -1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}