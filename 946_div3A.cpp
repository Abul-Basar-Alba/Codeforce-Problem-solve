/*#include<bits/stdc++.h>
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
        ll x,y;
        cin>>x>>y;
        //ll res=((4*y)+x+14)/15;
        ll res=0;
        while(x>0||y>0)
        {
           if(y>=2)
           {
               x-=7;
               y-=2;
               res++;
           }
           else if(y==1)
           {
               x-=11;
               y-=2;
               res++;
           }
           else
           {
               x-=15;
               //y-=2;
               res++;
           }
        }
        cout<<res<<endl;
    }
}
*/

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
        set<char>st;
        for(auto c:s)
        {
            st.insert(c);
        }
        vector<char>v(st.begin(),st.end());

        int x=st.size();
        map<char,char>mp;
        for(int i=0;i<(x+1)/2;i++)
        {
            mp[v[i]]=v[x-1-i];
            if(i!=x-1-i)
            {
                mp[v[x-1-i]]=v[i];
            }
        }
        string sr="";
        for(auto c:s)
        {
            sr+=mp[c];
        }
        cout<<sr<<endl;
    }
}

/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st(s.begin(), s.end());
        int x = st.size();
        vector<char>v(st.begin(), st.end());

        map<char, char> mp;
        for (int i = 0; i < (x + 1) / 2;i++)
        {
            mp[v[i]] =v[x - 1 - i];
            if (i != x - 1 - i)
            {
                mp[v[x - 1 - i]] =v[i];
            }
        }

        string sr = "";
        for (auto c : s)
        {
            sr += mp[c];
        }

        cout << sr << endl;
    }
    return 0;
}
*/

