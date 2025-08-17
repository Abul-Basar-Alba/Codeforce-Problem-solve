/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      ll n=s.size();
      if(n==2&&s[0]=='('&&s[1]==')')
        cout<<"NO\n";
      else
      {
          string st;
          for(int i=0;i<n;i++)
            st.push_back('(');
          for(int i=0;i<n;i++)
            st.push_back(')');

            if(st.find(s)!=string::npos)
             {
                st="";
                for(int i=0;i<n;i++)
                    st+="()";
                cout<<"YES\n";
                cout<<st<<endl;
             }
            else
            {
                cout<<"YES\n";
                cout<<st<<endl;
            }
      }
  }
}
*/
//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//  ll t;
//  cin>>t;
//  while(t--)
//  {
//      ll n,k;
//      cin>>n>>k;
//      string s;
//      cin>>s;
//      if(k%2==0)
//      {
//      sort(s.begin(),s.end());
//      cout<<s<<endl;
//      }
//      else
//      {
//          string od;
//          string e;
//          for(int i=0;i<n;i+=2)
//          {
//            od+=s[i];
//          }
//          sort(od.begin(),od.end());
//          for(int i=1;i<n;i+=2)
//          {
//            e+=s[i];
//          }
//          sort(e.begin(),e.end());
//          string ans;
//          ll a=0;
//          for(int i=0,j=1;i<n;i+=2,j+=2)
//          {
//              ans.push_back(od[a]);
//              if(j<n)
//              {
//              ans.push_back(e[a]);
//              }
//              a++;
//          }
//          cout<<ans<<endl;
//      }
//  }
//}

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;

        if (k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            string oddChars, evenChars;


            for (int i = 0; i < n; i += 2)
            {
                oddChars += s[i];
            }
            sort(oddChars.begin(), oddChars.end());

            for (int i = 1; i < n; i += 2)
            {
                evenChars += s[i];
            }
            sort(evenChars.begin(), evenChars.end());

            string ans;
            for (int i = 0, j = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    ans += oddChars[j];
                }
                else
                {
                    ans += evenChars[j];
                    j++;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}*/


//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//  ll t;
//  cin>>t;
//  while(t--)
//  {
//      ll m,k,a,b;
//      cin>>m>>k>>a>>b;
//
//      ll ans=min(m/k,b);
//
//      ll val=(m-ans*k);
//
//      m=max(0LL,val-a);
//
//      ll res=m/k+m%k;
//
//      if(a>=(k-m%k))
//      {
//         ll res1=m/k+1;
//         res=min(res,res1);
//      }
//      cout<<res<<endl;
//  }
//}
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;

        int fancyCoins = 0;

        // Step 1: Use as many regular k-burle coins as possible
        int regularKcoinsUsed = min(m / k, ak);
        m -= regularKcoinsUsed * k;

        // Step 2: Use as many regular 1-burle coins as possible
        int regular1coinsUsed = min(m, a1);
        m -= regular1coinsUsed;

        // Step 3: Calculate how many fancy coins are needed
        if (m > 0) {
            fancyCoins += m / k;
            m %= k;
            fancyCoins += m; // remaining 1-burle coins needed
        }

        cout << fancyCoins << endl;
    }
    return 0;
}
