#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll on=0;
        ll z=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                on++;
            else
                z++;
        }
        ll x=0;
        for(int i=0;i<s.size();i++)
        {

            if(s[i]=='1')
            {
                if(z>0)
               z--;
               else
                break;
            }
            else
            {
                if(on>0)
                 on--;
                 else
                    break;
            }
        }
        x=z+on;
        cout<<x<<endl;
    }
}
