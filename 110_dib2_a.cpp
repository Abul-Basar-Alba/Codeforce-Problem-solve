#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        if(max(s1,s2)>=min(s3,s4)&&max(s3,s4)>=min(s1,s2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
