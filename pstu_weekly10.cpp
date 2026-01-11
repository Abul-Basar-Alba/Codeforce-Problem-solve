// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
        
//        string s;
//        cin>>s;
//        string tem="abc";
//        if(s[0]=='a'&&s[1]=='b'&&s[2]=='c')
//        {
//            cout<<"YES"<<endl;
//            continue;
//        }
      
//         if(s[0]=='a')
//        cout<<"YES"<<endl;
//        else if(s[1]=='a'&&s[0]=='b')
//          {
//             cout<<"YES"<<endl;
              
//          }
//          else if(s[2]=='a'&&s[0]=='c')
//          cout<<"YES"<<endl;
//         else
// cout<<"NO"<<endl;
    

//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
        
//        ll h,m;
//        cin>>h>>m;
//        ll s=(23-h)*60+(60-m);
//        cout<<s<<endl;

//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
        
//        ll n;
//        cin>>n;
//        string s;
//        cin>>s;
//        if((s[0]=='0'&&s[n-1]=='0')||(s[0]=='1'&&s[n-1]=='1'))
//        {
//            cout<<n<<endl;
//        }
//        else
//        {
//         ll cn=0;
//          for(int i=0;i<n/2;i++)
//          {
//             if((s[i]=='0'&&s[n-i-1]=='1')||(s[i]=='1'&&s[n-i-1]=='0'))
//             cn++;
//            else
//             break;
//          }
//          cn=cn*2;
//          cout<<n-cn<<endl;
//        }
       

//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

    
        
//        ll n;
//        cin>>n;
//         if(n==2)
//         {
//          cout<<69<<endl;
//         }
//          else if(n==3)
//          {
//           cout<<111<<endl;
//          }
//          else if(n==4)
//          {
//           cout<<5115<<endl;
//          }
//          else if(n==5)
//          {
//           cout<<51015<<endl;
//          }
//          else if(n==6)
//          {
//           cout<<696969<<endl;
//          }
       
       
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

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
//         set<ll> s;
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             s.insert(a[i]);
//         }
//         vector<ll> b, c;
//         if(s.size()==1)
//         {
//             cout << -1<<"\n";
//             continue;
//         }
//         sort(a.begin(), a.end());
//         b.push_back(a[0]); 
//         for(int i = 1; i < n; i++)
//         {
//             if(a[0]==a[i])
//             {
//                 b.push_back(a[i]);
//             }
//             else
//             {
//                 c.push_back(a[i]);
//             }
//         }
//         cout << b.size() << " "<<c.size()<<"\n";
//         for(auto x : b)
//         {
//             cout << x << " ";
//         }
//         cout << "\n";
       
//         for(auto x : c)
//         {
//             cout << x << " ";
//         }
//         cout << "\n";


//     }


       
       
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll n,m;
//     cin >> n >> m;
//     ll p=0;

//     for(int i=0;i<1000;i++)
//     {
//         for(int j=0;j<1000;j++)
//         {
//             ll x=(i*i)+j;
//             ll y=i+(j*j);
//             if(x==n && y==m)
//             {
//                 p++;
//             }
//         }
//     }
//     cout<<p<<endl;
       
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = ll;
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         vector<string> grid(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> grid[i];
//         }

//         ll flipa= 0, flipb = 0;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 ll a = (i + j) % 2;   
//                 ll b = 1 - a;   
//                 ll cur = grid[i][j] - '0';
//                 if (cur != a)
//                     flipa++;
//                 if (cur != b)
//                     flipb++;
//             }
//         }

//         cout << min(flipa, flipb) << '\n';
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using ll = ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(is_sorted(a.begin(),a.end()))
        {
            cout<<0<<endl;
            continue;
        }
          if(is_sorted(a.rbegin(),a.rend()))
        {
            cout<<a[0]<<endl;
            continue;
        }
        ll L = 0, R = 1000000000;
        for(int i = 0; i + 1 < n; i++)
        {
            if(a[i] < a[i+1])
            {
                // x <= floor((a[i]+a[i+1]) / 2)
                ll hi = (a[i] + a[i+1]) / 2;
                R = min(R, hi);
            }
            else if(a[i] > a[i+1])
            {
                // x >= ceil((a[i] + a[i+1]) / 2)
                ll lo = (a[i] + a[i+1] + 1) / 2;
                L = max(L, lo);
            }
            
        }

        if(L <= R)
        {
            cout << L << "\n";
        } 
        else 
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
