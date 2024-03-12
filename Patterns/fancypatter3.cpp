#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if(i==0)
        cout<<"* "<<endl;
        int c=i<=n/2?2*i:2*(n-i-1);
        
        for (int j = 0; j <=c ; j++)
        {
            if(j==0)
            cout<<"*";
            if (j<=c/2)
            {
            cout<<j+1;
            }
            else{
                cout<<c-j+1;
            }
            
        }
        
        cout<<"*";
        cout << endl;
    }




}