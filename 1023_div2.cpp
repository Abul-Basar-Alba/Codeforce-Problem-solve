#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n,k;
    cin >> n >> k;
    vector<ll>a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum=accumulate(all(a),0LL);
    srt(a);
    a[n-1]--;
    srt(a);
   if((a[n-1]-a[0])>k)
   {
    cout<<"Jerry\n";
    return;
   }
   
      if(sum%2==0)
      {
        
          cout<<"Jerry\n";
      }
      else
      {
        cout<<"Tom\n";
      }
   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}