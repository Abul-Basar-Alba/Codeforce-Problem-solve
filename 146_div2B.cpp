/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    ll sum=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                int ans=k*j*i;
                set<int>s;

                  for (int l = 1; l <= sqrt(ans); l++)
                       {
                        if (ans % l == 0)
                         {
                           int x=l;
                           int y=ans/l;
                           s.insert(x);
                           s.insert(y);
                          }
                        }
                sum=(sum + s.size())%1073741824;
                  s.clear();
            }
        }
    }
    //sum=(sum%1073741824);
    cout<<sum<<endl;
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mp[a*b*c+1];
    for(int i=1;i<mp.size();i++)
    {
        for(int j=i;j<mp.size();j+=i)
        {
         mp[j]++;
        }
    }
    ll ans=0;
    ll mod=1073741824;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                int pod=k*j*i;
                int div=mp[pod];
                ans=(ans+div)%mod;
            }
        }
    }
    cout<<ans<<endl;
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
const int MAXN = 1000005; // Adjust the size as per the constraints
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mp[MAXN] = {0}; // Initialize the array

    for (int i = 1; i < MAXN; i++)
    {
        for (int j = i; j < MAXN; j += i)
        {
            mp[j]++;
        }
    }

    ll ans = 0;
    ll mod = 1073741824;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
             {
                int pod = k * j * i;
                int div = mp[pod];
                ans = (ans + div) % mod;
            }
        }
    }

    cout << ans << endl;
    return 0;
}*/
#include <bits/stdc++.h>
#define ll ll int
using namespace std;
const int MOD = 1073741824;
const int MAXN = 101;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<vector<vector<int>>> dp(MAXN, vector<vector<int>>(MAXN, vector<int>(MAXN, 0)));

    // Precompute the number of divisors for all numbers from 1 to a*b*c
    for (int i = 1; i <= a * b * c; i++)
    {
        for (int j = i; j <= a * b * c; j += i)
        {
            dp[j][0][0]++;
        }
    }

    for (int i = 1; i < MAXN; i++)
    {
        for (int j = 1; j < MAXN; j++)
        {
            for (int k = 1; k < MAXN; k++)
            {
                dp[i][j][k] = (dp[i][j - 1][k] + dp[i][j][k - 1] + dp[i][j - 1][k - 1] - dp[i][j - 1][k - 1] + MOD) % MOD;
            }
        }
    }

    ll sum = 0;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                sum = (sum + dp[i * j * k][i - 1][j - 1]) % MOD;
            }
        }
    }

    cout << sum << endl;
    return 0;
}


