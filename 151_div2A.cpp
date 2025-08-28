#include<bits/stdc++.h>
#define ll ll int
using namespace std ;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k>>x;
        if(k==1&&x==1)
            cout<<"NO\n";
        else if(n==k&&k!=x)
        {
            cout<<"YES\n";
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else if(n%k==0&&k>1&&k!=x)
            {
            cout<<"YES\n";
            cout<<n/k<<endl;
            while(n!=0)
            {
                cout<<k<<' ';
                n-=k;
            }
            cout<<endl;
        }
        else if(n%2==0&&k>=2&&x==1)
        {
            cout<<"YES\n";
            cout<<n/2<<endl;
            while(n!=0)
            {
                cout<<2<<' ';
                n-=2;
            }
            cout<<endl;
        }
        else if(n%2==1&&k==2&&x==1)
            cout<<"NO\n";

        else if(n>=2&&k>=2&&x==1)
        {
            cout<<"YES\n";
            n-=3;
            cout<<(n/2)+1<<endl;
            cout<<3<<' ';
            while(n!=0)
            {
               cout<<2<<' ';
               n-=2;
            }
            cout<<endl;
        }

        else if(x!=1&&k>=2)
        {
            cout<<"YES\n";
            cout<<n<<endl;
            while(n!=0)
            {
                cout<<1<<' ';
                n-=1;
            }
            cout<<endl;
        }

    }
}
