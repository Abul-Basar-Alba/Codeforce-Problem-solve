
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
        ll a,b,n,s;
        cin >>a>>b>>n>>s;
        ll mn=min(a,s/n);
       ll res=(mn)*n+b;
        if(b>=s)
        {
            cout<<"YES\n";
        }
        else if(res>=s)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
*/

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
        ll x,y;
        cin>>x>>y;
        ll mn=min(x,y);
        ll mx=max(x,y);
        cout<<mn<<" "<<mx<<endl;
    }
}
*/

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
        set<char> st;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }

        if (s.size() == 1 || st.size() == 1)
        {
            cout << "NO\n";
            continue;
        }
        string sr = s;
        sort(sr.begin(), sr.end());
        string res="";
        if (sr == s)
        {
          for(int i=0;i<s.size() - 1;i++)
          {
            if(s[i]!=s[i+1])
                swap(s[i],s[i+1]);
            res+=s[i];
          }
          res += s[s.size() - 1];
          cout<<"YES\n"<<res<<endl;
        }
        else
            cout<<"YES\n"<<sr<<endl;
    }

    return 0;
}
*/

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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll num[4] = {a, b, c, d};
        if(is_sorted(num,num+4)||a+b==c+d)
        {
          cout<<"NO\n";
          continue;
        }
        ll f=0,cnt=0;
        for(ll i=min(a,b);i<max(a,b);i++)
        {
            if(i==c||i==d)
            {
                cnt++;
            }
        }
        if(cnt==0||cnt==2)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}
