#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
     cin>>v[i];
    ll res=0;
    for(int i=0;i<n-1;i++)
    {
        if(i%2==1)
        {
            if(v[i-1]>v[i])
            {
                res+=((v[i-1]-v[i]));
                v[i-1]=v[i];
            }
            if(v[i+1]>v[i])
            {
                res+=((v[i+1]-v[i]));
                v[i+1]=v[i];
            }
            if(v[i-1]+v[i+1]>v[i])
            {
                res+=((v[i-1]+v[i+1])-v[i]);
                v[i+1]=v[i+1]-((v[i-1]+v[i+1])-v[i]);
            }
        }
    }
    if(n%2==0)
    {
        if(v[n-2]>v[n-1])
        {
            res+=((v[n-2]-v[n-1]));
        }
    }
    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}