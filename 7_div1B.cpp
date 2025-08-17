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
        int mx=0;
        int mn=n;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
              mn=min(mn,i);
            }
            else
            {
                mx=i;
            }
        }
        cout<<max(0,mx-mn)<<endl;
    }
}
