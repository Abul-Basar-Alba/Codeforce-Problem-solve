//Apartments

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll n,m,k;
     cin>>n>>m>>k;
     ll des[n+2];
     ll apr[m+2];
     for(int i=0;i<n;i++)
     {
       cin>>des[i];
     }
     sort(des,des+n);
     for(int i=0;i<m;i++)
     {
         cin>>apr[i];
     }
     sort(apr,apr+m);
     ll a=0,b=0;
     ll res=0;
     while(a<n&&b<m)//to pointer concept
     {
         ll gap=abs(des[a]-apr[b]);
         if(gap<=k)
         {
             res++;
             a++;b++;
         }
         else
         {
             if(des[a]<apr[b])
                a++;
             else
                b++;
         }
     }
     cout<<res<<endl;
}*/

//Ferris Wheel

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll n,x;
     cin>>n>>x;
     ll a[n+2];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a,a+n);
     ll i=0,j=n-1;
     ll res=0;
     while(i<=j)
     {
         ll s=a[i]+a[j];
         if(s<=x)
         {
             i++;j--;
         }
         else
            j--;

             res++;
     }
     cout<<res<<endl;
}*/


//Concert Tickets

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll n,m;
     cin>>n>>m;
     multiset<ll>s;
     for(int i=0;i<n;i++)
     {
         int a;
         cin>>a;
         s.insert(a);
     }
     for(int i=0;i<m;i++)
     {
         ll a;
         cin>>a;
         auto it=s.upper_bound(a);
         if(it==s.begin())
         {
             cout<<-1<<endl;
         }
         else
         {
             cout<<*(--it)<<endl;
             s.erase(it);
         }
     }
}*/

//Restaurant Customers


/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<pair<ll,ll>>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].first>>ar[i].second;
    }
    sort(ar.begin(),ar.end());
    multiset<ll>s;
    ll res=0;
    for(int i=0;i<n;i++)
    {
        int a=ar[i].first,b=ar[i].second;
        s.insert(b);
        while(*s.begin()<a)
        {
          s.erase(s.begin());
        }
        res=max(res,(ll)s.size());
    }
    cout<<res<<endl;

}*/
#include <iostream>
#include <string>
using namespace std;

bool isBinaryDecimal(string s) {
    for (char c : s) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Check if n is already a binary decimal
        string n_str = to_string(n);
        if (isBinaryDecimal(n_str)) {
            cout << "YES\n";
            continue;
        }

        // Check if n is divisible by powers of 11
        while (n % 11 == 0 && n > 1) {
            n /= 11;
            string n_str = to_string(n);
            if (isBinaryDecimal(n_str)) {
                cout << "YES\n";
                break;
            }
        }

        // If n is 1, then it can be represented as a product of binary decimals
        if (n == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
