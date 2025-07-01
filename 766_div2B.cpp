#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
               int a=abs(1-i)+abs(1-j);
               int b=abs(1-i)+abs(m-j);
               int c=abs(n-i)+abs(1-j);
               int d=abs(n-i)+abs(m-j);
               int x=max(a,max(b,max(c,d)));
               v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }
}
