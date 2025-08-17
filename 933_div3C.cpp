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
        string s;
        cin>>s;
        ll c=0;
        for(int i=0;i<n-2;i++)
        {
            if((s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')||(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'))
            {
               c++;
               i+=2;
            }
        }
        cout<<c<<endl;
    }
}

