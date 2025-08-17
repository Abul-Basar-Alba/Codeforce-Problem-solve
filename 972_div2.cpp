// #include<bits/stdc++.h>
// #define ll ll int 
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     ll tt;
//     cin>>tt;
//     while(tt--)
//     {
//        ll n,q,m;
//        cin>>n>>q>>m;
//        ll a,b;
//        cin>>a>>b;
//        ll x;
//        cin>>x;
//        vector<ll>v;
//        v.push_back(a);
//        v.push_back(b);
//        sort(v.begin(),v.end());
//        if(v[0]<x && v[1]<x)
//        {
//            cout<<abs(v[1]-n)<<endl;
//        }
//        else if(x<v[0] && x<v[1])
//        {
//            cout<<abs(v[0]-1)<<endl;
//        }
//        else
//        {
//            ll ok1=abs(x-v[0])-1;
//            ll ok2=abs(x-v[1])-1;
//            ll min1=min(ok1,ok2);
//            ll max1=max(ok1,ok2);
//            max1-=min1;
//            cout<<min1+1+max1/2<<endl;
//        }
//     }
//     return 0;
// }

//B2. The Strict Teacher (Hard Version)

#include<bits/stdc++.h>
#define ll ll int 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin>>tt;
    while(tt--)
    {
       ll n,m,q;
       cin>>n>>m>>q;
      vector<ll>v(m);
      for(int i=0;i<m;i++)  
        cin>>v[i];
        sort(v.begin(),v.end());
        while (q--)
        {
            ll d;
            cin>>d;
            if(d<v[0])
            {
                cout<<v[0]-1<<endl;
                continue;
            }
            else if(d>v[m-1])
            {
                cout<<n-v[m-1]<<endl;
                continue;
            }
            else
            {
                auto it=lower_bound(v.begin(),v.end(),d);
                auto it1=it;
                it1--;
                ll l=*it1 , r=*it;
                ll mid=(l+r)/2;
                cout<<min(abs(mid-l),abs(r-mid))<<endl;
            }
            
        }
        
    }
    return 0;
}
