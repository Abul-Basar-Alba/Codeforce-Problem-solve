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

const ll N = 1e6 + 5;
vector<bool> mark(N, false);

void sieve() 
{
    mark[0] = mark[1] = true;
    for (ll i = 2; i * i < N; i++) 
    {
        if (!mark[i]) 
        {
            for (ll j = i * i; j < N; j += i) 
            {
                mark[j] = true;
            }
        }
    }
}

void solve()
{
  ll n,m;
  cin>>n>>m;
  vector<ll>v(n);
  vector<ll>div(n);
  vector<ll>pre(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
   ll r=sqrt(v[i]);
   if(r*r==v[i])
   {
    if(!mark[r]&&r>=2)
    {
        div[i]=3;
    }
    else
    {
        div[i]=1;
    }
   }
   else
   {
    div[i]=1;
   }
  }
  ll cn=0;
  for(int i=0;i<n;i++)
  {
    if(div[i]==3)
    {
        cn++;
    }
    pre[i]=cn;
  }
  vector<ll>res;
  while(m--)
  {
    ll l,r;
    cin>>l>>r;
    l--;
    r--;
    ll x = pre[r] - (l > 0 ? pre[l-1] : 0);
    res.push_back(x);
  }
  for(auto a:res)
  {
    cout<<a<<" ";
  }
  cout<<endl;
}
int main()
{
    fastio
    sieve(); // Pre-calculate primes
    ll t=1;
    //cin>>t;
    // while(t--)
    // {
        solve();    
    //}
    return 0;
}
