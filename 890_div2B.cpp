#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll cnt=0;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
        for(auto i:a)
        {
            //cnt+=i==1;
            if(i==1)
                cnt++;
          sum+=i;
        }
        sum-=n;
        if(n==1)
            cout<<"NO\n";
        else if(sum>=cnt)
          cout<<"YES\n";
        else
          cout<<"NO\n";
    }
}
