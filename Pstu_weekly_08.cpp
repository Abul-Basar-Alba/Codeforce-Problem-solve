
//D. Amazing Teacher

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         if(n>0)
//             cout<<10<<endl;
//         else
//             cout<<0<<endl;
//     }
// }

//A. Ant Hill

// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//         ll n;
//         cin>>n;
//         vector<ll>a(n);
//         for(int i=0;i<n;i++)
//             cin>>a[i];
//         ll en=0;
//         ll ex=0;
//         ll mn=0;
//         for(int i=0;i<n;i++)
//         {
//            if(a[i]>=0)
//            {
//                 en+=a[i];
//            }
//            else
//             {
//                 ex+=a[i];
//                 mn=min(mn,(ex+en));
//             }
//         }
//         cout<<abs(mn)<<endl;
// }

//B. Is It A Math Problem?

// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// set<ll>s;

// void countDivisors(ll n)
// {
//     for (int i = 1; i <= sqrt(n); i++) 
//     {
//         if (n % i == 0) 
//         {
//                 ll x=i;
//                 ll y=n/i;
//                 s.insert(x);
//                 s.insert(y);
//         }
//     }
// }

// int main()
// {
    
//         ll n;
//         cin>>n;
//         bool ok=false;
//         ll x=sqrt(n);
//         if(x*x==n)
//         {
//             ok=true;
//         }
//         countDivisors(n);
//         ll res=s.size();
//       if(ok)
//       {
//         cout<<x<<" "<<res<<endl;
//       }
//       else
//       {
//         cout<<n<<" "<<res/2<<endl;
//       }
         

// }

//E. Working Time

// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         ll total_min = 0;
//         m*=60;

//         for(int i=0;i<n;i++)
//         {

//             string s,e;
//             cin>> s>>e;

//             ll hu1 = stoll(s.substr(0, 2));
//             ll mn1 = stoll(s.substr(3, 2));
//             ll hu2 = stoll(e.substr(0, 2));
//             ll mn2 = stoll(e.substr(3, 2));
//             //    stringstream ss(s);
//             //    string segment;
//             //     ll hu1, mn1, hu2, mn2;
//             //     getline(ss, segment, ':');
//             //     hu1 = stoll(segment);
//             //     getline(ss, segment);
//             //     mn1 = stoll(segment);
//             //     stringstream ss2(e);
//             //     string segment2;
//             //     getline(ss2, segment2, ':');
//             //     hu2 = stoll(segment2);
//             //     getline(ss2, segment2);
//             //     mn2 = stoll(segment2);
//              //cout << hu1 << " " << mn1 << " " << hu2 << " " << mn2 << endl;

//             ll start = hu1 * 60 + mn1;
//             ll end_ = hu2 * 60 + mn2;
//             total_min += (end_ - start);
//         }

//         if (total_min >= m)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
// }

//F. Smallest Difference

// #include <bits/stdc++.h>
// #define ll long long
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
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     for(ll i = 0; i < n; i++) 
//     {
//         cin >> a[i];
//     }

//     map<ll, ll> m;
//     for(ll i = 0; i < n; i++) 
//     {
//         m[a[i]]++;
//     }

//     ll mx = 0;
//     for(int i=1;i<=10010;i++) 
//     {
//         ll sum = m[i] + m[i + 1]; 
//         mx = max(mx, sum);
//     }

//     cout << mx << endl;
// }
// }

//G. Interview

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>a(n),pre(n+1);

    for(int i=0;i<n;i++)
        cin>>a[i];

    pre[0]=0;
    for(int i=0;i<n;i++)
        pre[i+1]=pre[i]+a[i];

    int lo=0,hi=n-1;
    int ans=-1;
while (lo<=hi)
{
    int mid = (lo + hi) / 2;
    int k = mid - lo + 1;
    cout << "? " << k << " ";
    for (int i = lo; i <= mid; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;

    int sum = pre[mid + 1] - pre[lo];
    int x;
    cin >> x;
    if (x==sum)
    {
        lo = mid + 1;
        
    }
    else
    {
        ans = mid;
        hi = mid-1;
    }
}
cout<<" ! "<<ans+1<<endl;

// Final check between lo and hi
// cout << "? 1 " << lo + 1 << endl;

// int x;
// cin >> x;
// if (x > a[lo])
//     cout << "! " << lo + 1 << endl;
// else
//     cout << "! " << hi + 1 << endl;

   }

}