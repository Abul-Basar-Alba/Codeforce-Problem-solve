//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//      ll n;
//      cin>>n;
//      ll res=0;
//
//      while(n!=0)
//      {
//        ll rem=n%10;
//         res+=rem;
//         n/=10;
//      }
//      cout<<res<<endl;
//    }
//    return 0;
//}
//


//B


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll a1, a2, b1, b2;
//        cin >> a1 >> a2 >> b1 >> b2;
//
//        ll res = 0;
//
//
//        ll v[4][4] = {
//            {a1, b1, a2, b2},
//            {a1, b2, a2, b1},
//            {a2, b1, a1, b2},
//            {a2, b2, a1, b1}
//        };
//
//        for (int i = 0; i < 4; ++i)
//        {
//            ll suneet= 0;
//            ll slavic = 0;
//
//            if (v[i][0] > v[i][1])
//            {
//                suneet++;
//            }
//            else if (v[i][0] < v[i][1])
//            {
//                slavic++;
//            }
//
//            if (v[i][2] > v[i][3])
//            {
//                suneet++;
//            }
//            else if (v[i][2] < v[i][3])
//            {
//                slavic++;
//            }
//
//            if (suneet>slavic)
//            {
//                res++;
//            }
//        }
//
//        cout << res << endl;
//    }
//
//    return 0;
//}


//C


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n, s, m;
//        cin >> n >> s >> m;
//
//        vector<pair<ll,ll>>v(n);
//
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> v[i].first >> v[i].second;
//        }
//
//        bool ok = false;
//        if (v[0].first >= s)
//        {
//            ok = true;
//        }
//
//        if (!ok)
//        {
//            for (int i = 1; i < n; ++i)
//            {
//                if (v[i].first - v[i - 1].second >= s)
//                {
//                    ok = true;
//                    break;
//                }
//            }
//        }
//
//        if (!ok)
//        {
//            if (m - v[n - 1].second >= s)
//            {
//                ok = true;
//            }
//        }
//
//        if (ok)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//
//    return 0;
//}


//D


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll T;
//    cin >> T;
//    while (T--)
//    {
//        string s, t;
//        cin >> s >> t;
//
//        ll s_len = s.size();
//        ll t_len = t.size();
//
//        ll s_ind= 0;
//        ll t_ind= 0;
//
//        while (s_ind< s_len && t_ind < t_len)
//        {
//            if (s[s_ind] == '?' || s[s_ind] == t[t_ind])
//            {
//                if (s[s_ind] == '?')
//                {
//                    s[s_ind] = t[t_ind];
//                }
//                t_ind++;
//            }
//            s_ind++;
//        }
//
//        if (t_ind < t_len)
//        {
//
//            cout << "NO" << endl;
//        }
//        else
//        {
//
//            for (int i = 0; i < s_len; i++)
//            {
//                if (s[i] == '?')
//                {
//                    s[i] = 'a';
//                }
//            }
//            cout << "YES" << endl;
//            cout << s << endl;
//        }
//    }
//
//    return 0;
//}


//G1


//#include<bits/stdc++.h>
//#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
//#define all(x) (x).begin(), (x).end()
//using namespace std;
//#define int ll
//
//int qry(int a, int b){
//   cout<<"? "<<a<<" "<<b<<endl;
//   int x;
//   cin>>x;
//   return x;
//}
//
//signed main() {
//   FAST_IO;
//   // start
//
//   int t;
//   cin>>t;
//   read:
//   while (t--) {
//      int lo = 2, hi = 999;
//
//      while (hi-lo>1)
//      {
//         int mid = (hi+lo)/2;
//         int val = qry(mid, mid);
//         if(val==mid*mid){
//            lo = mid+1;
//         }
//         else hi = mid;
//      }
//
//      int cur = qry(lo, lo);
//      if(cur==lo*lo)cout<<"! "<<hi<<endl;
//      else cout<<"! "<<lo<<endl;
//
//
//   }
//
//   return 0;
//}

// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll a1,a2,b1,b2;
//         cin>>a1>>a2>>b1>>b2;

//         ll way=0;
//         ll s1=0,s2=0;

//         if(a1>b1&&a2>b2)
//             s1++;
//         else if(a1<b1&&a2<b2)
//             s2++;
//         if(s1>s2)
//             way++;

//         s1=0,s2=0;
//         if(a1>b2&&a2>b1)  //{a2, b1, a1, b2},//{a2, b2, a1, b1}
//             s1++;
//         else if(a1<b2&&a2<b1)
//             s2++;
//         if(s1>s2)
//             way++;

//         s1=0,s2=0;
//         if(a2>b1&&a1>b2)
//             s1++;
//         else if(a2<b1&&a1<<b2)
//             s2++;
//         if(s1>s2)
//             way++;

//         s1=0,s2=0;
//         if(a2>b2&&a1>b1)
//             s1++;
//         else if(a2<b2&&a1<b2)
//             s2++;
//         if(s1>s2)
//             way++;

//         cout<<way<<endl;
//     }
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    ll T;
//    cin >> T;
//    while (T--)
//    {
//        string s, t;
//        cin >> s >> t;
//        ll s_len=s.size();
//        ll t_len=t.size();

//        if(s_len<t_len)
//        {
//         cout<<"NO\n";
//        }
//        ll q=0,c=0,tt=0;
//        while(q!=s_len)
//        {
//          if(s[q]==t[tt]||s[q]=='?')
//          {
//           c++;
//           if(s[q]=='?'&&tt<=t_len-1)
//           s[q]=t[tt];
//           else if(s[q]=='?')
//           s[q]='a';
//           tt++;
//           q++;
//          }
//          else
//          q++;
//        }
//        if(c>=t_len)
//        {
//        cout<<"YES\n";
//        cout<<s<<endl;
//        }
//        else
//        cout<<"NO\n";
//    }
// }

// 

