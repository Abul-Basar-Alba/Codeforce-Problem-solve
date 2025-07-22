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
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<ll,ll>mp;
    mp[0]=0;
    mp[1]=1;
    mp[2]=2;
    mp[3]=1;
    mp[4]=2;
    mp[5]=3;
    mp[6]=1;
    mp[7]=2;
    mp[8]=3;
    mp[9]=2;
    mp[10]=1;
    mp[11]=2;
    mp[12]=2;
    mp[13]=2;
    mp[14]=3;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if(n<15)
            cout<<mp[n]<<endl;
        else
        {
        ll div=n/15;
        n%=15;
        ll ans=div+mp[n];
        if(n>=5)
        {
           ans=min((div+mp[n]),(div+1+mp[n-5]));
        }
        cout<<ans<<endl;
        }

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
         int f=0,k=n;
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
            if(n>=5&&k!=n)
            {
              n-=5;
              c+=1;
            }
            }
        }
        c=min(x,c);
        cout <<c << endl;

    }

    return 0;
}


