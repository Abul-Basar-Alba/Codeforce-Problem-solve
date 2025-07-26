// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll a,b;
//         cin>>a>>b;
//         if(a>b)swap(a,b);
//         if((a+b)%3>0)
//                 cout<<"NO\n";
//         else
//         {
//             if(b>2*a)
//                 cout<<"NO\n";
//             else
//             cout<<"YES\n";

//         }


//     }
// }


#include <bits/stdc++.h>
#define ll ll int
using namespace std;
bool vis[1001][1001];
vector<string>ed;
ll n,m;
ll fx[]={1,-1,0,0};
ll fy[]={0,0,1,-1};
bool valid(ll i,ll j)
{
    if(vis[i][j])
    return false;
    if(i>=0 && i<n&&j>=0 && j<m)
    {
        return true;
    }
    return false;
}
void dfs(ll i,ll j)
{
    vis[i][j]=1;
    for(int k=0;k<4;k++)
    {
        ll tx=i+fx[k];
        ll ty=j+fy[k];
        if(valid(tx,ty)&&ed[tx][ty]=='.')
        {
           dfs(tx,ty); 
        }

    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    //char v[n][m];
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        ed.push_back(s);
    }
    ll cn=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j]&&ed[i][j]=='.')
            {
              dfs(i,j);
              cn++;
            }
        }
    }
    cout<<cn<<endl;
     


}