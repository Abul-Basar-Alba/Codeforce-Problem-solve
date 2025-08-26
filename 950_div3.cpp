//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n, m;
//        cin >> n >> m;
//
//        string a;
//        cin >> a;
//
//        map<char, int>mp;
//        for (char ch : a)
//        {
//            mp[ch]++;
//        }
//
//        ll res= 0;
//        for (char ch = 'A'; ch <= 'G';ch++)
//        {
//            ll r= m;
//            ll l=mp[ch];
//            if (l< r)
//            {
//                res += (r-l);
//            }
//        }
//
//        cout << res << endl;
//    }
//
//    return 0;
//}
//


//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//
//    ll t;
//    cin >> t;
//
//    while (t--)
//    {
//        ll n, f, k;
//        cin >> n >> f >> k;
//
//        vector<ll> a(n);
//        for (int i = 0; i < n;i++)
//        {
//            cin >> a[i];
//        }
//
//        ll val= a[f - 1];
//
//        sort(a.rbegin(), a.rend());
//
//
//        ll cn_t = count(a.begin(), a.end(), val);
//        ll rem= count(a.begin(), a.begin() + k, val);
//
//        if (rem== 0)
//        {
//            cout << "NO" << endl;
//        }
//        else if (rem <cn_t)
//        {
//            cout << "MAYBE" << endl;
//        }
//        else
//        {
//            cout << "YES" << endl;
//        }
//    }
//}


// practice

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//
//    ll t;
//    cin >> t;
//
//    while (t--)
//    {
//        ll n,m;
//        cin>>n>>m;
//        string s;
//        cin>>s;
//        map<char,int>mp;
//        for(auto c:s)
//            mp[c]++;
//        ll res=0;
//        for(char i='A';i<='G';i++)
//        {
//            ll x=m;
//            ll y=mp[i];
//            if(y<x)
//            {
//              res+=(x-y);
//            }
//        }
//        cout<<res<<endl;
//
//    }
//}


//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//
//    ll t;
//    cin >> t;
//
//    while (t--)
//    {
//        ll n,f,k;
//        cin>>n>>f>>k;
//        vector<ll>a(n);
//        for(int i=0;i<n;i++)
//            cin>>a[i];
//        ll fav=a[f-1];
//        sort(a.rbegin(),a.rend());
//        ll m=0,y=0;
//        for(int i=0;i<k;i++)
//        {
//            if(a[i]==fav)
//            {
//                m=1;
//                y=1;
//            }
//        }
//        for(int i=k;i<n;i++)
//        {
//            if(a[i]==fav&&m==1)
//            {
//                m=2;
//            }
//        }
//        if(m==2)
//            cout<<"MAYBE\n";
//        else if(y==1)
//            cout<<"YES\n";
//        else
//            cout<<"NO\n";
//    }
//}


#include<bits/stdc++.h>
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
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);

        // Reading a
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Reading b
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        ll m;
        cin >> m;
        vector<ll> d(m);
        multiset<ll> mp;

        // Reading d and storing in a multiset
        for(int i = 0; i < m; i++) {
            cin >> d[i];
            mp.insert(d[i]);
        }

        // Check if the last element of d is present in b
        bool lastElementInB = false;
        for(int i = 0; i < n; i++) {
            if(b[i] == d[m - 1]) {
                lastElementInB = true;
                break;
            }
        }

        if (!lastElementInB) {
            cout << "NO\n";
            continue;
        }

        // Check transformation feasibility
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                auto it = mp.find(b[i]);
                if(it != mp.end()) {
                    mp.erase(it);
                } else {
                    ok = false;
                    break;
                }
            }
        }

        if(ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
