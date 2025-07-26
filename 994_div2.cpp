
//A.MEX Destruction

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll cn=0;
        if(v[0]!=0)
        {
        cn++;
        bool ok=false;
        for(int i=1;i<n;i++)
        {
          if(v[i]==0)
          ok=true;
          if(ok==true&&v[i]!=0)
          {
            cn++;
            break;
          }
        }
        cout<<cn<<endl;
        }
        else 
        {
            bool first=false;
            bool zero=false;

            for(int i=1;i<n;i++)
            {
                if(v[i]!=0&&first==false)
                {
                cn++;
                first=true;
                }
                if(zero==false&&first==true&&v[i]==0)
                {
                    zero=true;
                }
                if(zero==true&&v[i]!=0)
                {
                    cn++;
                    break;
                }
            }
            cout<<cn<<endl;
        }

        
    }
}