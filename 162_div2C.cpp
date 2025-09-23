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
        ll n,q;
        cin>>n>>q;
        ll a[n+2];
       ll v[n+2]={0};
        ll pre[n+2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pre[0]=a[0];
        if(a[0]==1)
            v[0]=1;
        for(int i=1;i<n;i++)
        {
            pre[i]=a[i]+pre[i-1];
            if(a[i]==1)
            v[i]=1;
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            if(l==r)
                cout<<"NO\n";
            else
            {
                ll p=pre[r-1]-pre[l-1];
                ll on=0;
                for(int i=l-1;i<r;i++)
                {
                   if(v[i]==1)
                        on+=1;
                }
                p-=on;
                if(p>on)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }

    }
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> triangular = {1, 3, 6, 10, 15};
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> dp(n + 1, n);
        dp[0] = 0;

        for (int coin : triangular)
        {

            for (int i = coin; i <= n; ++i)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
        cout << dp[n] << endl;
    }

    return 0;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
          int y=n%10;
        int cn= 0;
        int v[] = {15, 10, 6, 3, 1};
        int c=0;
         for (int i = 0; i < 5;i++)
        {
            if(n%v[i]==0)
            {
              cn=v[i];
              break;
            }

        }

         int x=n/cn;
        for (int i = 0; i < 5;i++)
        {
            if(n>=v[i])
            {
            while(1)
            {
             n-=v[i];
             c++;
             if(n<v[i])
                break;
            }
            }
        }
        if(y==8)
           --c;

        c=min(x,c);
        cout <<c << endl;

    }

    return 0;
}
