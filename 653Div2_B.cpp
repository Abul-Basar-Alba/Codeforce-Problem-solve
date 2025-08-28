/*#include<bits/stdc++.h>
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
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        ll f=0,c=0;
        if(n%6==0)
        {
            while(n!=1)
            {
                n/=6;
                c++;
                if(n%6!=0&&n!=1)
                {
                    n*=2;
                    c++;
                }
                if(n%6!=0&&n!=1)
                {
                   f=1;
                   break;
                }
            }
        }
        else
        {
            n*=2;
            c++;
            if(n%6!=0)
                f=1;
            else
            {
                while(n!=1)
                {
                 n/=6;
                c++;
                if(n%6!=0&&n!=1)
                {
                    n*=2;
                    c++;
                }
                if(n%6!=0&&n!=1)
                {
                   f=1;
                   break;
                }
                }
            }
        }
        if(f==0)
            cout<<c<<endl;
        else
            cout<<-1<<endl;

    }
}
*/

#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s;
    cin>>n>>s;
    ll a[n+2];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll mx=a[s-1],ans=0;
    n-=1;
    while(n--)
    {
       ll u,v;
       cin>>u>>v;
        for(int i=u-1;i<v;i++)
        {
           if(mx<a[i])
           {
               mx=a[i];
               ans++;
           }
        }
    }
    cout<<ans<<endl;
}

/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

vector<vector<ll>> g;
vector<ll>v;
vector<bool>vis;

int dfs(ll node,ll pre)
{
    vis[node] = true;
    ll c=1;

    for (auto it: g[node])
    {
        if (!vis[it] &&v[it] >pre)
        {
            c+= dfs(it,v[it]); // Recursive DFS
        }
    }

    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;

    v.resize(n + 1);
    g.resize(n + 1);
    vis.assign(n + 1, false);
    for (int i = 1; i <= n; i++)
        cin >>v[i];

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    ll pre=v[s];
    ll mx= dfs(s,pre) - 1;

    cout <<mx<< endl;

    return 0;
}
*/
