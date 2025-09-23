#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<ll>cnt(26,0);
    for(ll i=0;i<s.length();i++)
    {
        ll a=s[i]-'A';
        cnt[a]++;
    }
    ll odd=0;
    for(ll i=0;i<26;i++)
    {
        if(cnt[i]%2!=0)
            odd++;
    }
    ll len=s.length();
    if(len%2!=0)
    {
        if(odd!=1)
            cout<<"NO SOLUTION\n";
        else
        {
        string first="",last="";
        string middel="";
        for(ll i=0;i<26;i++)
        {
            char ch='A'+i;
            if(cnt[i]%2!=0)
            {
                for(ll j=0;j<cnt[i];j++)
                {
                    middel.push_back(ch);
                }
                continue;
            }
            for(ll j=0;j<cnt[i]/2;j++)
            {
                first.push_back(ch);
                last.push_back(ch);
            }
        }
        reverse(last.begin(),last.end());
        cout<<first<<middel<<last<<'\n';
    }
    }
    else
        if(odd>0)cout<<"NO SOLUTION\n";
    else
    {
        string first="",last="";
        for(ll i=0;i<26;i++)
        {
            char ch='A'+i;
            for(ll j=0;j<cnt[i]/2;j++)
            {
                first.push_back(ch);
                last.push_back(ch);
            }
        }
        reverse(last.begin(),last.end());
        cout<<first<<last<<"\n";
    }
}
