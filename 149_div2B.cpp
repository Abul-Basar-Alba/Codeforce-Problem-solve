#include<bits/stdc++.h>
#define ll ll int
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
        int mx=0;
        int c=0;
        int cn=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='<')
            {
              c++;
              mx=max(mx,c);
              cn=0;
            }
            else if(s[i]=='>')
            {
                cn++;
                mx=max(mx,cn);
                c=0;
            }
        }
        cout<<mx+1<<endl;

    }

}
