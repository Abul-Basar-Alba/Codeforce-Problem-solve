#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Basar()
{
    ll n,k;
    cin >> n >> k;

    map<ll,ll> coin;
    map<ll,ll> mp;

    if(n<=k)
    {
        cout<<3*n<<endl;
        return;
    }
    for (int x = 0; x <= 20; x++) 
    {
        ll con = (pow(3, x+1) + (x * (ll)pow(3, x-1)));
        coin[x] = con;
    }

    ll ans = 0;
    for(int i=20;i>=0;i--)
    {
        ll sum=pow(3,i);
        if(sum<=n)
        {
            ll cnt=n/sum;
            mp[i]=cnt;
            n%=sum;
            if(n==0)
            {
                break;
            }
        }
    }
    bool ok=true;
    for(int i=0;i<=20;i++)
    {
        if(mp[i]>0 && k>=mp[i])
        {
            ans+=coin[i]*mp[i];
            k -= mp[i];
        }
        else if(k<mp[i])
        {
            ok=false;
            break;
        }
    }

    cout << (ok ? ans : -1) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}
