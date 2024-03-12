#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int>>arr{{1,3},{2,4},{6,8},{9,10}};
int n = arr.size();

for (int i = 0; i < n; i++)
{
    for (int j = 0; i < arr[0].size(); i++)
    {
        if (arr[i][j+1]>arr[i+1][j])
        {
            arr[i][j]
        }
        
    }
    
}

}