/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll y,k,n;
    cin>>y>>k>>n;
    if(y==n)
        cout<<-1<<endl;
    else
    {
        ll c=0;
       for(ll i=1;i<=100000;i++)
       {
           if((y+i)%k==0&&(y+i)<=n)
           {
               cout<<i<<' ';
               c++;
           }
           if((y+i)>n)
            break;
       }
        if(c==0)
            cout<<-1<<endl;
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll y, k, n;
    cin >> y >> k >> n;

    ll start = k - (y % k); // Finding the first multiple of k greater than y
    vector<ll>v;

    for (ll i=start;i<=n-y;i+=k)
    {
        v.push_back(i);
    }

    if (v.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (ll x : v)
        {
            cout << x << " ";
        }
    }

    return 0;
}

