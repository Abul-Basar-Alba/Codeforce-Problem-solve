#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define pb push_back
#define all(v) v.begin(),v.end()
#define sz(a) (ll)a.size()
#define F first
#define S second
#define endl "\n"
#define MOD 1000000007
#define vi vector<ll>
#define vvi vector<vi>
#define pii pair<ll,ll>
#define vpii vector<pii>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fillv(v,x) memset(v,x,sizeof(v))
#define fill2d(v,x) memset(v,x,sizeof(v[0][0])*sz(v)*sz(v[0]))
#define forn(i,n) for(ll i=0;i<n;i++)
#define forr(i,n) for(ll i=n-1;i>=0;i--)
#define forab(i,a,b) for(ll i=a;i<=b;i++)
#define forba(i,a,b) for(ll i=a;i>=b;i--)
const ll INF = 1e18;    
ll mod(ll a,ll b){return (a%b+b)%b;}    
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}
bool isPowerOfTwo(ll n){return (n && !(n & (n - 1)));}
bool isPrime(ll n){if(n<=1)return false;for(ll i=2;i*i<=n;i++){if(n%i==0)return false;}return true;}
void solve()
{
   ll n, k;
        cin >> n >> k;  
        if (k > n) 
        {
            cout << -1 << "\n";
            return;
        }
        if (n == k) 
        {
            cout << 0 << "\n";
            return;
        }
        map<ll, ll> mp;
        queue<ll> q;
        
        mp[n] = 0;
        q.push(n);
        
        ll ans = -1;
        bool ok = false;
        
        while (!q.empty() && !ok) 
        {
            ll curr = q.front();
            q.pop();
            ll step= mp[curr]; 
            if (curr == k) 
            {
                ans = step;
                ok = true;
                break;
            }
            ll child1 = curr / 2;
            ll child2 = (curr + 1) / 2;
            if (child1 >= k && !mp.count(child1)) 
            {
                mp[child1] = step + 1;
                q.push(child1);
            }
            if (child2 >= k && !mp.count(child2)) 
            {
                mp[child2] = step + 1;
                q.push(child2);
            }
        }
        
        cout << ans << "\n";
}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        solve();    
    }
    return 0;
}
