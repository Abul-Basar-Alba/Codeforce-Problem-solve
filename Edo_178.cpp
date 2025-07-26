// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll int;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//        ll a,b,c;
//        cin>>a>>b>>c;
//        ll tem=c-b;
//        ll x=b-a;
//        ll res=tem-x;
//        if(res>=0&&res%3==0)
//        {
//         cout<<"YES\n";
//        }
//        else
//        {
//         cout<<"NO\n";
//        }

//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll int;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         ll mx = *max_element(a.begin(), a.end());
//         cout<<mx<<" ";
//         vector<ll> b;
//         ll mx1=0;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]>mx1)
//             {
//                 mx1=a[i];
//             }
//             b.push_back(mx1);

//         }
//        ll sum=0;

//         for (int k = n-1; k>0; k--)
//         {
//             sum+=a[k];
//             cout<<sum+b[k-1]<<" ";
//         }
//         cout<<endl;
//     }
// }




#include <bits/stdc++.h>
using namespace std;    
using ll = ll int;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2)
        {
            if(s[0]=='A')
            {
                cout<<"Alice\n";
            }
            else if(s[0]=='B')
            {
                cout<<"Bob\n";
            }
            continue;
        }
        if(s[0]=='A'&&s[n-1]=='A')
        {
            cout<<"Alice\n";
        }
        else if(s[0]=='B'&&s[n-1]=='B')
        {
            cout<<"Bob\n";
        }
        else
        {
            if(s[n-1]=='B')
            {
                bool ok=false;
                for(int i=0;i<n-1;i++)
                {
                    if(s[i]=='B')
                    {
                        ok=true;
                        break;
                    }
                }
                if(ok==true)
                {
                    cout<<"Bob\n";
                }
                else
                {
                    cout<<"Alice\n";
                }

            }
            else if(s[n-1]=='A')
            {
                ll fa=0,fb=0;
                for(ll i=n-2;i>=0;i--)
                {
                   if(s[i]=='A')
                   {
                    fa=max(fa,i);
                   }
                  else if(s[i]=='B')
                  {
                      fb=max(fb,i);  
                  }
                }
                if(fa>fb)
                {
                    cout<<"Alice\n";
                }
                else if(fa<fb)
                {
                    cout<<"Bob\n";
                }
                
            }

        }
    }
}