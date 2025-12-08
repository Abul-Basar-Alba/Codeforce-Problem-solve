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

    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]==-1&&a[n-1]==-1)
    {
        cout<<0<<endl;
        for(int i=0;i<n;i++)
        {
         if(a[i]!=-1)
         cout<<a[i]<<" ";
        else
        cout<<0<<" ";
        }
        cout<<endl;
    }
    else if(a[0]==-1||a[n-1]==-1)
    {
        cout<<0<<endl;
        if(a[0]==-1)
        a[0]=a[n-1];
        else if(a[n-1]==-1)
        a[n-1]=a[0];
        cout<<a[0]<<" ";
        for(int i=1;i<n-1;i++)
        {
            if(a[i]==-1)
            cout<<0<<" ";
            else
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<" ";
        cout<<endl;
    }
    else
    {
        cout<<abs(a[0]-a[n-1])<<endl;
        for(int i=0;i<n;i++)
        {
         if(a[i]!=-1)
         cout<<a[i]<<" ";
        else
        cout<<0<<" ";
        }
        cout<<endl;
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