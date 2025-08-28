#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        vector<ll>tem;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            //tem.push_back(a[i]);
        }
        sort(a,a+n);
       // list<int>l;
        ll mn=INT_MAX;
        ll p,q;
        for(int i=1;i<n;i++)
        {
           ll x=abs(a[i]-a[i-1]);
           //mn=min(mn,x);
           if(x<mn)
           {
               mn=x;
               p=i-1;
               q=i;
           }
        }
        if(n==2)
        {
            cout<<a[0]<<' '<<a[1]<<endl;
            continue;
        }
        for(int i=q;i<n;i++)
        {
            cout<<a[i]<<' ';
        }
        for(int i=0;i<=p;i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
}
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        list<int> l;
        map<int,int> mp;
        for(ll i = 0; i < n; i++)
            mp[a[i]]++;
        bool flag = false;
        for(auto it : mp)
            {
            if(it.second >= 2)
            {
                flag = true;
                l.push_front(it.first);
                for(ll i = 0; i < n; i++)
                {
                    if(a[i] != it.first)
                        l.push_back(a[i]);
                }
                l.push_back(it.first);
                break;
            }
        }
        if(flag)
        {
            for(auto i : l)
                cout << i << ' ';
            cout << endl;
        }
        else
        {
            sort(a, a + n);
            for(ll i = 0; i < n - 2; i++)
                l.push_back(a[i]);
            l.push_front(a[n-2]);
            l.push_back(a[n-1]);
            for(auto i : l)
                cout << i << ' ';
            cout << endl;
        }
    }
    return 0;
}*/

