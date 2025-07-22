//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//     ll x,y,k;
//     cin>>x>>y>>k;
//     if(k%2)
//     {
//         cout<<x<<' '<<y<<endl;
//         k--;
//     }
//     for(int i=1;i<=k/2;i++)
//     {
//         cout<<x+i<<' '<<y+i<<endl;
//         cout<<x-i<<' '<<y-i<<endl;
//     }
//    }
//    return 0;
//}



#include <bits/stdc++.h>
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
     cin>>n;
     vector<ll>p(n);
     vector<ll>res;
     for(int i=0;i<n;i++)
     {
         cin>>p[i];
     }
     for(int i=1;i<n;i++)
        res.push_back(p[i]);
     res.push_back(p[0]);
     for(int i:res)
        cout<<i<<' ';
     cout<<endl;
    }
    return 0;
}
