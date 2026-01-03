#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
  string s;
  cin>>s;
  ll cny=0,cn=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='Y')
    {
        cny++;
    }
    else
    cn++;
  }
  if(cny>1)
  {
    cout<<"NO\n";
  }
  else
  {
    cout<<"YES\n";
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
