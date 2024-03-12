#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<vector<int>> arr{{1, 2, 3},{4,5,6},{7,8,9}};
    int a , b , c , d , max = INT_MIN; 
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if(max<arr[i][j]){
            max  = arr[i][j];
            c = i ;
            d = j;
            }
        }
        
    }
    int min = INT_MAX; 
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            a = i ;
            b = j ;
            if(min>arr[i][j] && a<c && b<d ){
                min = arr[i][j];
            }
        }
        
    }
    int diff = max - min;
    cout<<diff;
    
}