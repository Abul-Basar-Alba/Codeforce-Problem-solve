#include<bits/stdc++.h>
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
        ll k,n;
        cin>>k>>n;
        if(n==k)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<' ';
            }
            cout<<endl;
            //continue;
        }
        else
        {
        vector<ll>v;
        v.push_back(1);
        ll f=k-1;
        ll sum=1,tem=2;
        for(int i=2;i<=n&&f>0;i++)
        {
            sum+=i;
            f--;
          ll x=n-sum;
            if(x>=f)
            {
                //tem=i;
                v.push_back(sum);
            }
            else
            {
                for(int j=1;f>0;j++)
                {
                        v.push_back(v.back() + 1);
                        f--;
                }
               break;
            }
        }
        while(v.size()<k)
        {
            v.push_back(v.back()+1);
        }
        for(ll c:v)
            cout<<c<<' ';
        cout<<endl;
        }
    }
    return 0;
}


/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll k, n;
        cin >> k >> n;

        if (n == k)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << ' ';
            }
            cout << endl;
            continue;
        }

        vector<ll> v;
        v.push_back(1);

        ll f = k - 1;
        ll sum = 1;
        ll tem = 2;

        for (int i = 2; i <= n && f > 0; i++)
        {
            sum += i;
            f--;
            ll x = n - sum;

            if (x >= f)
            {
                tem = i;
                v.push_back(sum);
            }
            else
            {
                for (int j = tem + 1; f > 0; j++)
                {
                    v.push_back(v.back() + 1);
                    f--;
                }
                break;
            }
        }

        while (v.size() < k)
        {
            v.push_back(v.back() + 1);
        }

        for (ll c : v)
        {
            cout << c << ' ';
        }
        cout << endl;
    }

    return 0;
}
*/
