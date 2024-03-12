#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr{{0, 0, 0, 1},
                            {0, 1, 1, 1},
                            {1, 1, 1, 1},
                            {0, 0, 0, 0}};
    int c = 0;
    int max = 0 , row = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        c = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i][j])
            {
                c++;
            }
        }
        if (max < c){
            max = c;
            row=i;
        }
    }

    cout<<"Maximum No. of 1s in row "<<row+1<<" is "<<max;
}