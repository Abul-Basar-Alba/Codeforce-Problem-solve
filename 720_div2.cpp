
//A. Nastia and Nearly Good Numbers

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
      ll a,b;
      cin>>a>>b;
      ll x=a;
      ll y=a*b;
      if(b==1)
      {
        cout<<"NO\n";
        continue;
      }
      ll z=x+y;
      cout<<"YES\n";
      cout<<x<<" "<<y<<" "<<z<<endl;
    }
}


