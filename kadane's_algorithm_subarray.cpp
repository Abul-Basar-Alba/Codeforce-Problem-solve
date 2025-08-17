#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int mx=INT_MIN;
    int cu=0;
    for(int i=0;i<n;i++)
    {
        cu+=ar[i];
        mx=max(mx,cu);
        if(cu<0)
            cu=0;
    }
    cout<<mx<<endl;
}
