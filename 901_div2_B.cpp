#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,sum=0;
        cin>>n>>m>>k;
        //ll a[n],b[m];
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int j=0;j<m;j++)
            cin>>b[j];
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
        if(k%2==0)
        {
            if(a[0]<b[m-1])
            {
                swap(a[0],b[m-1]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
            }
            if(b[0]<a[n-1])
            {
                swap(b[0],a[n-1]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
            }
        }
        else
        {
            if(a[0]<b[m-1])
            {
                swap(a[0],b[m-1]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
            }
        }
        for(auto it:a)
            sum+=it;
        cout<<sum<<endl;

    }
}
