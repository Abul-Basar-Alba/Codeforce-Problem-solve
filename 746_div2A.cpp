/*#include<bits/stdc++.h>
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
       ll n,h;
       cin>>n>>h;
       ll a[n+2];
       for(int i=0;i<n;i++)
            cin>>a[i];
       sort(a,a+n);
       ll mx=a[n-1];
       ll mn=a[n-2];
      if(mx>=h)
        cout<<1<<endl;
      else if(mx+mn>=h)
        cout<<2<<endl;
      else
      {
          ll x=mx+mn;
          if(h%x==0)
            cout<<2*(h/x)<<endl;
          else
          {
              if(h%x<=mx)
                cout<<(2*(h/x)+1)<<endl;
              else
                cout<<(2*(h/x)+2)<<endl;
          }
      }
    }
}
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool hasRepeated = false;
        for (int i = 0; i < s.length(); ++i) {
            for (int j = i + 1; j < s.length(); ++j) {
                if (s[i] == s[j]) {
                    hasRepeated = true;
                    break;
                }
            }
            if (hasRepeated) {
                break;
            }
        }

        if (hasRepeated) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
