#include <bits/stdc++.h>
using namespace std;
int Divide(int dd, int dv){
int s = 0;
int e = abs(dd);
int mid = s+(e-s)/2; 
int ans = 0;
while (s<=e)
{
    if (abs(mid*dv)==abs(dd))
    {
        ans = mid;
        break;
    }
    else if (abs(mid*dv)>abs(dd))
    {
        e = mid-1;
    }
    else{
        ans = mid;
        s = mid+1;
    }
    mid= s+(e-s)/2;
    
}

if ((dv>0 && dd>0) ||(dd<0 && dv<0))
{
return ans;
}
else{
    return -ans ;
}

}
int main()
{
    int dd = -21;
    int dv = 7;
    int ans = Divide(dd , dv);
    cout<<ans;

    return 0;
}