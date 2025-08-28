
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
        ll n;
        cin>>n;
        ll a[n+2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll f=0,f1=a[0],f2=0,tem=0;
        string s="";
        for(int i=0;i<n;i++)
        {
            if(f<=a[i]&&tem==0)
            {
                s+='1';
                f=a[i];
            }
            else if(f>a[i]&&f1>=a[i]&&f2==0)
            {
                s+='1';
                f=a[i];f2=1;
                tem=1;
            }
            else if((f<=a[i]&&f1>=a[i]))
            {
                s+='1';
                f=a[i];
            }
            else
                s+='0';
        }
        cout<<s<<endl;
    }
}
