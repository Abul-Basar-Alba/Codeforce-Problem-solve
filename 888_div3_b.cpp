#include<bits/stdc++.h>
#define ll ll int
using  namespace  std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        int c=0;
        for(ll i=0;i<n;i++)
        {
            if((a[i]%2)!=(b[i]%2))
              c++;
        }
        if(c==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
/*#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
#define ll ll int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF (ll)1e16
int main()
{
   Faster;
   int t;
    cin>>t;
   while(t--)
    {
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
      }

      vector<bool> isOdd(n,false);
      vector<int> even,odd;
      for(int i=0;i<n;i++)
      {
         if(a[i]%2==1)
         {
            isOdd[i]=true;
            odd.push_back(a[i]);
         }
         else
         {
            even.push_back(a[i]);
         }
      }

      sort(even.begin(),even.end(),greater<int>());
      sort(odd.begin(),odd.end(),greater<int>());

      for(int i=0;i<n;i++)
      {
         if(isOdd[i])
         {
            a[i]=odd.back();
            odd.pop_back();
         }
         else
         {
            a[i]=even.back();
            even.pop_back();
         }
      }


      if(is_sorted(a.begin(),a.end()))
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }


   }
   return 0;
}*/


