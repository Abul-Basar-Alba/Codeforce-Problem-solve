#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<int>st;
        map<char,int>mp;
            for(auto c:s)
            {
                st.insert(c);
                mp[c]++;
            }
        if(st.size()==1)
            cout<<-1<<endl;
        else if(st.size()==2)
        {
            int ans=4;
            for(auto [c,x]:mp)
            {
                if(x==1)
                {
                    ans=6;
                    break;
                }
            }
            cout<<ans<<endl;
        }
        else if(st.size()==3)
            cout<<4<<endl;
        else if(st.size()==4)
            cout<<4<<endl;
    }
}
