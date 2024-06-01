//#include<bits/stdc++.h>
//#define ll long long int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n, m;
//        cin >> n >> m;
//
//        if (m <= n && (n - m) % 2 == 0)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//
//    return 0;
//}
//


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
   ll t;
   cin >> t;
   while (t--)
   {
       ll x;
       cin >> x;
       vector<ll> result;

       while (x > 0)
       {
           if (x & 1)
           {
               if (x & 2)
               {
                   result.push_back(-1);
                   x = (x + 1) >> 1;
               }
              else
               {
                   result.push_back(1);
                   x >>= 1;
               }
           }
          else
           {
               result.push_back(0);
               x >>= 1;
           }
       }

       cout << result.size() << endl;
       for (int val : result)
       {
           cout << val << " ";
       }
       cout << endl;
   }
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   solve();
   return 0;
}




