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
//      ll a,b,c;
//      cin>>a>>b>>c;
//      ll mx=0;
//      for(int i=0;i<6;i++)
//      {
//          for(int j=0;j<6;j++)
//          {
//            for(int k=0;k<6;k++)
//            {
//                if(i+j+k>5)
//                    continue;
//                mx=max(mx,(a+i)*(b+j)*(c+k));
//            }
//          }
//      }
//      cout<<mx<<endl;
//    }
//    return 0;
//}


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
//     ll n,k;
//     cin>>n>>k;
//     vector<ll>v(k);
//     for(int i=0;i<k;i++)
//        cin>>v[i];
//     sort(v.begin(),v.end());
//     ll op=0;
//     for(int i=0;i<k-1;i++)
//     {
//       op+=(2*v[i]-1);
//     }
//     cout<<op<<endl;
//    }
//    return 0;
//}


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
//      ll n,m,k;
//      cin>>n>>m>>k;
//      vector<ll>v;
//      for(int i=n;i>=k;i--)
//      {
//          v.push_back(i);
//      }
//      for(int i=m+1;i<k;i++)
//      {
//          v.push_back(i);
//      }
//      for(int i=1;i<=m;i++)
//      {
//          v.push_back(i);
//      }
//      for(ll c:v)
//        cout<<c<<' ';
//      cout<<endl;
//    }
//    return 0;
//}


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
//     ll n,m,k;
//     cin>>n>>m>>k;
//     string s;
//     cin>>s;
//     ll del=0,imp=0;
//     ll cur=m-1;
//     for(char c:s)
//     {
//         if(c=='L')
//            cur=m;
//         else if(c=='W'&&cur<=0)
//            del++;
//         else if(c=='C'&&cur<=0)
//            imp++;
//         cur--;
//     }
//     if(del>k)
//        imp++;
//     if(imp==0)
//        cout<<"YES\n";
//     else
//        cout<<"NO\n";
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
    ll q;
    cin >> q;
    while (q--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll dis= abs(a - b) + abs(a - c) + abs(b - c);

        for (int i = -1; i <= 1;i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                for (int k = -1; k<= 1; k++)
                {
                    ll na = a + i;
                    ll nb = b + j;
                    ll nc = c + k;
                    ll cur= abs(na - nb) + abs(na - nc) + abs(nb - nc);
                    dis = min(dis, cur);
                }
            }
        }

        cout <<dis<< endl;
    }
    return 0;
}

