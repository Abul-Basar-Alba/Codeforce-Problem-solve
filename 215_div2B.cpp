/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >>n>>m;
    ll a[n+2];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    set<ll>s;
    for(int i=n;i>0;i--)
    {
      s.insert(a[i]);
      a[i]=s.size();
    }
    int p;
    for(int i=0;i<m;i++)
    {
        cin>>p;
        cout<<a[p]<<endl;
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    set<int> distinct;
    vector<int> result;

    for (int i = n - 1; i >= 0; --i)
    {
        distinct.insert(a[i]);
        result.push_back(distinct.size());
    }

    for (int i = 0; i < m; ++i)
    {
        int li;
        cin >> li;
        cout << result[n - li] << endl;
    }

    return 0;
}


