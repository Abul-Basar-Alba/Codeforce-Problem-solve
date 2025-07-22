/*#include<bits/stdc++.h>
#define ll ll int
using  namespace  std;
//bool prime[90000001];
int t;
ll l,r;
int n=10000001;
vector<bool> make(n);
vector<int>v;
void solve(ll l,ll r)
{
    if(r<4)
            cout<<"-1"<<endl;
        else if(l==r)
        {
           if(v[l]==l)
            cout<<-1<<endl;
           else
           {
            cout<<v[l]<<" "<<l-v[l]<<endl;
           }
        }
        else if(r%2==0)
        {
            cout<<2<<" "<<r-2<<endl;
        }
        else
            cout<<2<<" "<<r-3<<endl;
}
void input()
{
    cin>>l>>r;
}
void sieve()
{
	make[0]=1;
	for(int i=2;i*i<=n;i++)
	{
		if(make[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				make[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(make[i]==0)v.push_back(i);
	}
}
int main()
{
	sieve();
	ll t;
	cin>>t;
	while(t--)
	{
		input();
		solve();
	}
	return 0;
}*/

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int t;
ll L, R;
vector<int>sieve;
void solve()
 {
    if (R < 4)
    {
        cout << -1 << endl;
    }
    else if (L == R)
    {
        if (sieve[L] == L)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << sieve[L] << " " << (L - sieve[L]) << endl;
        }
    }
    else if (R % 2 == 0)
    {
        cout << 2 << " " << (R - 2) << endl;
    }
    else
    {
        cout << 2 << " " << (R - 3) << endl;
    }
}

void input()
{
    cin >> L >> R;
}

void sieves()
 {
    int n = 10000001;
    sieve.resize(n);
    for (int i = 1; i < n; ++i)
    {
        sieve[i] = i;
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (sieve[i] == i)
        {
            for (int j = i * i; j < n; j += i)
            {
                sieve[j] = i;
            }
        }
    }
}

int main()
 {
     //ll t
    cin >> t;
    sieves();
    while(t--)
    {
        input();
        solve();
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n=10000001;
    //vector<bool>mark(n);
    vector<ll>v;
    v.resize(n);
    for(ll i=1;i<n;i++)
    {
        v[i]=i;
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(v[i]==i)
        {
            for(ll j=i*i;j<n;j+=i)
            {
                v[j]=i;
            }
        }
    }
    //mark[0]=1;
   /* for(ll i=2;i*i<=n;i++)
    {
        if(mark[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                mark[j]=1;
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        if(mark[i]==0)
            v.push_back(i);
    }*/
    ll t;
    cin>>t;
    while(t--)
    {
      ll l,r;
      cin>>l>>r;
      if(r<4)
        cout<<-1<<endl;
      else if(l==r)
      {
          if(v[l]==l)
            cout<<-1<<endl;
          else
            cout<<v[l]<<" "<<(l-v[l])<<endl;
      }
      else if(r%2==0)
      {
          cout<<2<<" "<<r-2<<endl;
      }
      else
        cout<<2<<" "<<r-3<<endl;

    }


}
