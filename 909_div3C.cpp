#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int sum=v[0];
        int ans=v[0];
        for(int i=1;i<n;i++)
        {
            if(sum<0)
                sum=0;
            if((v[i]%2!=0&&v[i-1]%2==0)||(v[i]%2==0&&v[i-1]%2!=0))
                sum+=v[i];
            else
               sum=v[i];
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
}
