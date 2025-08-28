//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//      ll n,c;
//      cin>>n>>c;
//      vector<ll>a(n);
//      for(int i=0;i<n;i++)
//      {
//          cin>>a[i];
//      }
//      sort(a.begin(),a.end());
//      ll cn=0;
//      ll res=0;
//      for(int i=0;i<n-2;i++)
//      {
//        if(a[i+2]-a[i]<=c)
//        {
//            res++;
//            i+=2;
//        }
//      }
//      cout<<res<<endl;
//    return 0;
//}

//
//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll n;
//    cin >> n;
//
//    string res="";
//
//    while (n > 0)
//    {
//        if (n % 2 == 1)
//        {
//            res+= 'A';
//            n = (n - 1) / 2;
//        }
//        else
//        {
//            res+= 'B';
//            n = (n - 2) / 2;
//        }
//    }
//
//    reverse(res.begin(), res.end());
//
//    cout << res<< endl;
//    return 0;
//}


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n,x;
//        cin >> n >> x;
//
//         set<int>st;
//        for (int i = 0; i < n; i++)
//        {
//            ll a;
//            cin >> a;
//            st.insert(a);
//        }
//
//        ll sum= x * (x + 1) / 2;
//        for (ll c:st)
//        {
//            if (c <= x)
//            {
//                sum-= 2 * c;
//            }
//        }
//
//        cout <<sum<< endl;
//    }
//
//    return 0;
//}


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//
//        vector<ll> a(n);
//        for (int i = 0; i < n;i++)
//        {
//            cin >> a[i];
//        }
//        sort(a.begin(),a.end());
//
//        ll mx= a[n-1]&a[n-1];
//
//        cout <<mx<< endl;
//    }
//
//    return 0;
//}
//


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n;
//        cin>>n;
//        if(n==1)
//        {
//            cout<<1<<endl;
//            continue;
//        }
//      ll cnt = 0;
//        for(int i = 1; i * i <= n; i++){
//            cnt++;
//        }
//        ll ans = cnt + (n - cnt) * n;
//        cout << ans << endl;
//    }
//}
//


#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ফাংশন যা একাধিক টেস্ট কেসের ইনপুট নেয় এবং প্রতিটি টেস্ট কেসের আউটপুট প্রদর্শন করে
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a;
        cin >> n >> a;

        // সিকোয়েন্সে ১-এর সংখ্যা গণনা করা
        int count_one = 0;
        for (char c : a) {
            if (c == '1') count_one++;
        }

        // যদি সিকোয়েন্সে একটির বেশি ১ থাকে, তবে YES, অন্যথায় NO
        if (count_one > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    // দ্রুত ইনপুট এবং আউটপুট এর জন্য
    ios::sync_with_stdio(false);
    cin.tie(0);

    // solve() ফাংশন কল করা
    solve();

    return 0;
}
