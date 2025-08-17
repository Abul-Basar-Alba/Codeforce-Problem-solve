#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s[0]==s[n-1])
        {
             cout<<n<<endl;
             continue;
        }
        map<char,int>mp;
        for(auto c:s)
            mp[c]++;
        int mx=0;
        for(const auto& p:mp)
        {
            mx=max(mx,p.second);
        }
        int len=0;
        len=max(0,mx-(n-mx));
        if(len==0&&n%2==1)
            cout<<1<<endl;
        else
            cout<<len<<endl;
    }
}
