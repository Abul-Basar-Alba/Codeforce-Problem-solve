#include<bits/stdc++.h>
//#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        int cn=0,c=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
                cn++;
        }
        for(int j=0;j<m-1;j++)
        {
            if(t[j]==t[j+1])
                c++;
        }
        if(cn==0)//if s all elements different ans yes.
            cout<<"Yes\n";
        else if(c>0)
            cout<<"No\n";//if t any elements are same ans no.
        else
        {
            int p=0;
            for(int i=0;i<n-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    if(s[i]!=t[0]&&s[i+1]!=t[m-1])//if s two elements same check s.first elements t.first and s.second elements and t.last elements.
                        p++;                      //if same ans no.if different ans yes.
                    else
                       {
                           p=0;
                           break;
                       }
                }
            }
            if(p!=0)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
}
