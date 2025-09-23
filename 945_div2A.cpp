#include <bits/stdc++.h>
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
        ll p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        ll sum=p1+p2+p3;
        if ((p1%2!=0&&p2%2!=0&&p3%2!=0)||(p1==0&&p2==0&&p3%2!=0)||(p2==0&&p3==0&&p1%2!=0)||(p3==0&&p1==0&&p2%2!=0)||sum%2!=0)
        {
            cout << -1 << endl;
            continue;
        }
        if((p1==0&&p2==0&&p3%2==0)||(p2==0&&p3==0&&p1%2==0)||(p3==0&&p1==0&&p2%2==0))
        {
            cout<<0<<endl;
            continue;
        }
        ll res=0;
        res+=p1;
        ll x=p3-p1;
        res+=min(x,p2);
        if(p2>x)
        res+=(p2-x)/2;
        cout<<res<<endl;
    }
    return 0;
}

