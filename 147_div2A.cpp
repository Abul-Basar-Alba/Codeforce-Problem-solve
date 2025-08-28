/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
   vector<pair<int,int>>v;
   for(ll i=0;i<t;i++)
   {
       int x,y;
       cin>>x>>y;
       v.push_back(make_pair(x,y));
       //s.insert(make_pair(x,y));
   }
   sort(v.begin(),v.end());
   //int c;
   int c=0;
   int mx=INT_MIN;
   for(ll i=0;i<v.size()-1;i++)
   {

        if(v[i]==v[i+1])
        {
            c++;
        }
        else
        {
          mx=max(mx,c);
          c=0;
        }
   }
   mx=max(mx,c);
   //if(c==0)
    //cout<<1<<endl;
   //else
   //if((t-1)==c)
    //cout<<t<<endl;
   //else
    cout<<mx+1<<endl;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        int n=0;
        if(s[0]=='?')
            c++;
        if(s[0]=='0')
            n++;
        int cn=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='?')
                cn++;
        }
        int x=0;
        if((c==0&&cn==0&&n==0))
        {
            cout<<1<<endl;
        }
        else if((c==0&&cn==0)||n!=0)
        {
            cout<<0<<endl;
        }
        else if(c!=0&&cn==0)
        {
            cout<<9<<endl;
        }
        else if(c!=0&&cn!=0)
        {
            x=9;
           for(int i=1;i<=cn;i++)
           {
            x*=10;
           }
           cout<<x<<endl;
        }
        else
        {
            x=1;
           for(int i=1;i<=cn;i++)
           {
            x*=10;
           }
           cout<<x<<endl;
        }

    }
}
