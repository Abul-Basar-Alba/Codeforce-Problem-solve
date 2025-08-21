#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin>>n;
    string ss;
    cin>>ss;
    ll p=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(ss[i]=='s')
            s++;
        else if(ss[i]=='p')
            p++;
    }
    if(s==0&&p==0)
    {
        cout<<"YES\n";
    }
    else if(s==0&&p!=0)
    {
        cout<<"YES\n";
    }
    else if(s!=0&&p==0)
    {
        cout<<"YES\n";
    }
    else if(s!=0&&p!=0)
    {
        char f='t';
        bool ok=true;
        if((ss[n-1]=='.'||ss[n-1]=='p')&&(ss[0]=='.'||ss[0]=='s'))
        {
            for(int i=1;i<n-1;i++)
            {
                if(ss[i]!='.'&&f=='t')
                {
                    f=ss[i];
                }
                else if(ss[i]!='.'&&f!=ss[i])
                {
                    cout<<"NO\n";
                    ok=false;
                    return;
                }
            }
            if(ok)
            {
                cout<<"YES\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}
           