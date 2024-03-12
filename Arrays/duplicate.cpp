#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr{1,3,2,6,3,6};
vector<int>ans;
for(int i = 0; i<arr.size();i++)
{
    for(int j =i+1;j<arr.size();j++)
    {
        if(arr[j]==arr[i]){
            ans.push_back(arr[j]);
        }
    }
}
cout<<"Duplicate Elements are : ";
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

return 0 ;

}