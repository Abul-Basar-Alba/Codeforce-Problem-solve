
#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
     ll n,k;
     cin>>n>>k;
     vector<ll>v(n);
     for(int i=0;i<n;i++) 
     cin>>v[i];
 
     ll gcd=k+1;
 
        for(int i=0;i<n;i++)
        {
            ll val=v[i]%gcd;
 
            v[i]=v[i]+val*k;
        }

        for(auto it:v)
        {
            cout<<it<<" ";
        } 
        cout<<endl;

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