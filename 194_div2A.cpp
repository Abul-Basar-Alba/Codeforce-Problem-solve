/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(int i=1,j=n*n;i<=n*n;i++,j--)
    {
      v.push_back(i);
      v.push_back(j);
    }
    for(int i=0;i<n*n;i++)
    {
        cout<<v[i]<<' ';
        if((i+1)%n==0)
            cout<<endl;
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i > m || m == 0)
        {
            ans = m;
            break;
        }
        m -= i;
    if(m!=0&&i==n)
        i=0;
    }
    cout << ans << endl;
    return 0;
}
