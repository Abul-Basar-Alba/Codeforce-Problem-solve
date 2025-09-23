#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll sum=n-n%k;
        sum+=min(n%k,k/2);
        cout<<sum<<endl;
       /* if(n<=k)
            cout<<1<<endl;
        else if(k==1||n%k==0)
         cout<<n<<endl;
        else if((n%2!=0&&k%2==0)||(n%2==0&&k%2==0))
            {
              for(int i=1;i<=k/2;i++)
               sum+=(n/k+1);
            for(int i=1;i<=(k/2);i++)
                sum+=(n/k);
            cout<<sum<<endl;
            }
        else if((n%2==0&&k%2!=0)||(n%2!=0&&k%2!=0))
        {
            for(int i=1;i<=k/2;i++)
               sum+=(n/k+1);
            for(int i=1;i<=(k/2+1);i++)
                sum+=(n/k);
            cout<<sum<<endl;
        }
        else
            cout<<(k/2+k)<<endl;*/
    }
}
