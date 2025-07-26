/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int solve(string s)
{
    ll n = s.length();

    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == '+')
        {
            arr[i] = 1;
        } else
        {
            arr[i] = -1;
        }
    }

    vector<ll> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        ll sum = 0;
        for (int j = i - 1; j >= 0; --j)
        {
            sum += arr[j];
            dp[i] = min(dp[i], dp[j] + abs(sum) * (i - j));
        }
    }

    return dp[n];
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        ll ans= solve(s);
        cout <<ans<< "\n";
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll p=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='-')
                m++;
            else
                p++;
        }
        cout<<abs(p-m)<<endl;
    }
}
