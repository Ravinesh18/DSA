#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        //spaces
        for(int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";

        }
        //stars
        for(int j = 0; j < 2*i+1; j++)
        {
            if(i==0||i==n-1)
            cout<<"* ";
            else if (j==0||j==2*i)
            cout<<"* ";
            else
            cout<<"  ";

        }
        cout<<endl;
    
    }
    
}