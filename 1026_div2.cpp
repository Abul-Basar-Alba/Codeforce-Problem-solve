#include <bits/stdc++.h>
#define ll ll
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll n = s.size();

        bool ok1 = false;
        ll f1=0;
        for(int i=0;i<n;i++)
        {
           
            if(s[i]=='(')
            {
                f1++;
            }
            else if(s[i]==')')
            {
                f1--;
            }
             if(f1==0 &&i<n-1)
            {
                ok1 = true;
                break;
            }

        }
        if(!ok1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }   

    }
}


// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for(ll i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//         }
//         sort(a.begin(), a.end());
//         ll mx=a[0];
//         ll j=n-1;
//         ll c1=0;
//         while(j>=0)
//         {
//             ll x=mx+a[j];
//             if(x%2==0)
//             {
//                 //c1=j;
//                 break;
//             }
//             c1++;
//             j--;
//         }
//         ll mn=a[n-1];
//         ll i=0;
//         ll c2=0;
//         while(i<n)
//         {
//             ll x=mn+a[i];
//             if(x%2==0)
//             {
//                 //c2=i;
//                 break;
//             }
//             c2++;
//             i++;
//         }
//         cout << min(c1, c2) << endl;


        

//     }
// }