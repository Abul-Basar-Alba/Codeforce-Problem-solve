#include<bits/stdc++.h>
#define ll ll int
using namespace std;

set<int>s;

void countDivisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
                int x=i;
                int y=n/i;
                s.insert(x);
                s.insert(y);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        countDivisors(n);
        cout<<s.size()<<endl;
        for(auto it:s)cout<<it<<" ";
        cout<<endl;
        s.clear();
    }
}

// kth divisor problem codechef vector proces

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
set<ll>s;
void countDivisors(ll n)
{
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
                ll x=i;
                ll y=n/i;
                s.insert(x);
                s.insert(y);
        }
    }
}

int main()
{
        ll n,k;
        cin>>n>>k;
        countDivisors(n);
        vector<ll>v;
    v.assign(s.begin(),s.end());
      if(k>v.size())
        cout<<-1<<endl;
      else
        cout<<v[k-1]<<endl;
}*/

// kth divisor problem codechef iterator proces

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

set<ll> s;

void countDivisors(ll n)
 {
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ll x = i;
            ll y = n / i;
            s.insert(x);
            s.insert(y);
        }
    }
}

int main()
{
    ll n, k;
    cin >> n >> k;
    countDivisors(n);

    if (k <= s.size())
    {
        auto it = s.begin();
        advance(it, k - 1); // Adjust to get the k-th element (0-based indexing)
        cout << *it << endl; // Dereference the iterator to get the value
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}*/


