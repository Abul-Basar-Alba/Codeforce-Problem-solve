//B
/*
#include<bits/stdc++.h>
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
        ll n;
        cin >> n;

        set<ll>s;
        s.insert(0);
        for (int k = 1; k * k <=n;k++)
        {
           s.insert(n / k);
            if (k != n / k)
               s.insert(k);
        }
        cout <<s.size() << endl;
        for (int it :s)
            cout <<it<< " ";
        cout << endl;
    }

    return 0;
}
*/
//R
/*
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<ll> pre(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        pre[i + 1] = pre[i] + a[i];
    }

    vector<ll> v(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        v[i] = pre[i];
        if (i > m)
        {
            v[i] +=v[i - m];
        }
    }

    for (int i= 1;i<= n;i++)
    {
        cout <<v[i]<< " ";
    }
    cout << endl;

    return 0;
}
*/
//D
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> a(n);
        vector<ll> b(n);
        //ll f=0;
        for (int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
         bool f = true;
       ll k = 0;
       ll m = -1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                if(b[i] < a[i]){f = false; break;}
                k = b[i] - a[i];
                m = i;
                break;
            }
        }

        for(int i = m; i < n; i++)
        {
            if(a[i] == b[i])
                break;
            a[i] += k;
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                f = false;
                break;
            }
        }

        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
*/
//E
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(a>b)
        {
            a-=b;
            ll c=0;
            if(a>=5)
            {
              c=a/5;
              a%=5;
            }
            if(a!=0&&a>=2)
            {
                c+=a/2;
                a%=2;
            }
            if(a!=0&&a>=1)
            {
                c+=a/1;
                a%=1;
            }
            cout<<c<<endl;
        }
        else
        {
             b-=a;
            ll c=0;
            if(b>=5)
            {
              c=b/5;
              b%=5;
            }
            if(b!=0&&b>=2)
            {
                c+=b/2;
                b%=2;
            }
            if(b!=0&&b>=1)
            {
                c+=b/1;
                b%=1;
            }
            cout<<c<<endl;
        }
    }
}*/

//F
/*#include<bits/stdc++.h>
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
        string s;
        cin >> s;

        bool ok = true;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != '?' && s[i] == s[i + 1])
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << "-1\n";
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                if (s[i - 1] != 'a' && s[i + 1] != 'a')
                {
                    s[i] = 'a';
                }
                else if (s[i - 1] != 'b' && s[i + 1] != 'b')
                {
                    s[i] = 'b';
                }
                else
                {
                    s[i] = 'c';
                }
            }
        }

        cout << s << "\n";
    }

    return 0;
}*/

//G
#include<bits/stdc++.h>
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
        ll r,g,b;
        cin>>r>>g>>b;
        ll days = min({(r + g + b) / 2, r + g, g + b, b + r});
        cout << days << endl;
        /*ll days = 0;
        ll arr[3] = {r, g, b};
         sort(arr,arr+3);
        while (arr[1] > 0)
        {
            arr[2]--;
            arr[1]--;
            days++;
            sort(arr,arr+3);
        }
        cout << days << endl;*/
    }
}

