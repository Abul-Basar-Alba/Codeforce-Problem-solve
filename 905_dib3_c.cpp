#include<bits/stdc++.h>
//#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x[n];
        int ans=k,even=0;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            if(x[i]%2==0)even++;
            if(x[i]%k==0) ans=0;
            else
                ans=min(ans,k-x[i]%k);
        }
        if(k==4)
        {
            if(even>=2)ans=0;
            else if(even==1) ans= min(ans,1);
            else ans= min(ans,2);
        }
        cout<<ans<<endl;
    }
}
