#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int>arr , int n , int target){

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    
    return -1;

}
int main(){
vector<int>arr{99,4,66,55,34,78,92,12};
int n = arr.size();
int target = 78;
int index = LinearSearch(arr , n , target) ;
if (index==-1)
{
    cout<<"Not Found!"<<endl;
}
else{
  cout<<"Found at index = "<<index+1<<endl;
}


    return 0;
}