//A

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//       ll a,b;
//       cin>>a>>b;
//       cout<<b-a<<endl;
//     }
// }

//B

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//       ll n;
//       cin>>n;
//       vector<ll>v;
//       while(n--)
//       {
//         string s;
//         cin>>s;
//         for(int i=0;i<4;i++)
//         {
//           if(s[i]=='#')
//           {
//             v.push_back(i+1);
//             break;
//           }
//         }
//       }
//       reverse(v.begin(),v.end());
//       for(int i:v)
//       cout<<i<<' ';
//       cout<<endl;
//     }
// }

//C

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//       ll x,y,k;
//       cin>>x>>y>>k;
//       ll a=(x+k-1)/k;
//       ll b=(y+k-1)/k;
//       if(a<b)
//       a=b;
//       else if(a>b)
//       b=a-1;
//       cout<<a+b<<endl;
//     }
// }

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//       ll n;
//       cin>>n;
//       vector<ll>v(n);
//       for(int i=0;i<n;i++)
//       {
//       cin>>v[i];
//       }
//       if(v[n-1]==1)
//       {
//         cout<<2*n<<endl;
//         continue;
//       }
//       ll mx=0;
//       for(int i=0;i<n;i++)
//       {
//         for(int j=n-1,k=i+1;j>=i+1,k<n;j--,k++)
//         {
//           ll g=__gcd(v[i],v[j]);
//           ll g1=__gcd(v[i],v[k]);
//           if(g==1)
//           {
//             mx=max(mx,(i+j+2LL));
//             break;
//           }
//           if(g1==1)
//           {
//             mx=max(mx,(i+k+2LL));
//             break;
//           }
//         }
//       }
//       if(mx!=0)
//       cout<<mx<<endl;
//       else
//       cout<<-1<<endl;
//     }
// }

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         map<ll,ll>mp;// Note that the array has at most 1000 distinct elements, since ai≤1000.
//         for(int i=1;i<=n;i++)
//         {
//           ll x;
//           cin>>x;
//           mp[x]=i;
//         }
//         ll mx=-1;
//         for(auto x:mp)
//         {
//           for(auto y:mp)
//           {
//             if(__gcd(x.first,y.first)==1)
//             {
//               mx=max(mx,x.second+y.second);
//             }
//           }
//         }
//         cout<<mx<<endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//         ll n,k;
//         cin >> n>>k;
//         if(n%2==1 && k%2==0||n<k)
//         {
//            cout<<"NO\n";
//         }
//         else if(n==k)
//         {
//           cout<<"YES\n";
//           for(int i=1;i<=n;i++)
//           {
//            cout<<1<<' ';
//           }
//           cout<<endl;
//         }
//         else
//         {
//           if(n%2==1 && k%2==1)
//           {
//             ll x=n-(k-1);
//             if(x&1)
//             {
//               cout<<"YES\n";
//               cout<<x<<' ';
//               for(int i=1;i<k;i++)
//               cout<<1<<' ';
//               cout<<endl;
//             }
//             else
//             cout<<"NO\n";
//           }
//           else if(n%2==0&&k%2==1)
//           {
//             ll x=n-2*(k-1);
//             if(x%2==0&&x>0)
//             {
//               cout<<"YES\n";
//               cout<<x<<' ';
//               for(int i=1;i<k;i++)
//               cout<<2<<' ';
//               cout<<endl;
//             }
//             else
//             cout<<"NO\n"; 
//           }
//           else if(n%2==0&&k%2==0)
//           {
//             ll x=n-(k-1);
//             if(x%2==1&&x>0)
//             {
//               cout<<"YES\n";
//               cout<<x<<' ';
//               for(int i=1;i<k;i++)
//               cout<<1<<' ';
//               cout<<endl;
//             }
//             else
//             cout<<"NO\n"; 
//           } 
//         }
//     }
// }

