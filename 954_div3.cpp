//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll x1, x2, x3;
//        cin >> x1 >> x2 >> x3;
//
//        ll ar[3] = {x1, x2, x3};
//        sort(ar,ar+ 3);
//        ll a=ar[1];
//
//        ll res= abs(a - x1) + abs(a - x2) + abs(a - x3);
//        cout <<res<< endl;
//    }
//    return 0;
//}


//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
//    {
//        ll n, m;
//        cin >> n >> m;
//        ll a[n][m];
//        for(int i = 0; i < n; i++)
//        {
//            for(int j = 0; j < m; j++)
//            {
//                cin >> a[i][j];
//            }
//        }
//        for(int i = 0; i < n; i++)
//        {
//            for(int j = 0; j < m; j++)
//            {
//                if(n == 1)
//                {
//                    if(j == 0 && j + 1 < m && a[i][j] > a[i][j + 1])
//                        a[i][j] = a[i][j + 1];
//                    else if(j > 0 && j < m - 1 && a[i][j] > max(a[i][j - 1], a[i][j + 1]))
//                        a[i][j] = max(a[i][j - 1], a[i][j + 1]);
//                    else if(j == m - 1 && a[i][j] > a[i][j - 1])
//                        a[i][j] = a[i][j - 1];
//                }
//                else if(m == 1)
//                {
//                    if(i == 0 && i + 1 < n && a[i][j] > a[i + 1][j])
//                        a[i][j] = a[i + 1][j];
//                    else if(i > 0 && i < n - 1 && a[i][j] > max(a[i - 1][j], a[i + 1][j]))
//                        a[i][j] = max(a[i - 1][j], a[i + 1][j]);
//                    else if(i == n - 1 && a[i][j] > a[i - 1][j])
//                        a[i][j] = a[i - 1][j];
//                }
//                else
//                {
//                    if(i == 0 && j == 0)
//                    {
//                        if(a[i][j] > max(a[i][j + 1], a[i + 1][j]))
//                            a[i][j] = max(a[i][j + 1], a[i + 1][j]);
//                    }
//                    else if(i == 0 && j == m - 1)
//                    {
//                        if(a[i][j] > max(a[i][j - 1], a[i + 1][j]))
//                            a[i][j] = max(a[i][j - 1], a[i + 1][j]);
//                    }
//                    else if(i == n - 1 && j == 0)
//                    {
//                        if(a[i][j] > max(a[i - 1][j], a[i][j + 1]))
//                            a[i][j] = max(a[i - 1][j], a[i][j + 1]);
//                    }
//                    else if(i == n - 1 && j == m - 1)
//                    {
//                        if(a[i][j] > max(a[i][j - 1], a[i - 1][j]))
//                            a[i][j] = max(a[i][j - 1], a[i - 1][j]);
//                    }
//                    else if(i == 0)
//                    {
//                        if(a[i][j] > max({a[i][j - 1], a[i][j + 1], a[i + 1][j]}))
//                            a[i][j] = max({a[i][j - 1], a[i][j + 1], a[i + 1][j]});
//                    }
//                    else if(i == n - 1)
//                    {
//                        if(a[i][j] > max({a[i][j - 1], a[i][j + 1], a[i - 1][j]}))
//                            a[i][j] = max({a[i][j - 1], a[i][j + 1], a[i - 1][j]});
//                    }
//                    else if(j == 0)
//                    {
//                        if(a[i][j] > max({a[i - 1][j], a[i][j + 1], a[i + 1][j]}))
//                            a[i][j] = max({a[i - 1][j], a[i][j + 1], a[i + 1][j]});
//                    }
//                    else if(j == m - 1)
//                    {
//                        if(a[i][j] > max({a[i - 1][j], a[i][j - 1], a[i + 1][j]}))
//                            a[i][j] = max({a[i - 1][j], a[i][j - 1], a[i + 1][j]});
//                    }
//                    else
//                    {
//                        if(a[i][j] > max({a[i - 1][j], a[i][j + 1], a[i][j - 1], a[i + 1][j]}))
//                            a[i][j] = max({a[i - 1][j], a[i][j + 1], a[i][j - 1], a[i + 1][j]});
//                    }
//                }
//            }
//        }
//        for(int i = 0; i < n; i++)
//        {
//            for(int j = 0; j < m; j++)
//            {
//                cout << a[i][j] << ' ';
//            }
//            cout << endl;
//        }
//    }
//    return 0;
//}



//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n,m;
//        cin>>n>>m;
//        ll a[n][m];
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<m;j++)
//            {
//                cin>>a[i][j];
//            }
//        }
//            ll l,r,u,d;
//            for(int i=0;i<n;i++)
//            {
//                for(int j=0;j<m;j++)
//                {
//                    if(i>0)
//                       u=a[i-1][j];
//                    else
//                        u=0;
//                    if(i<n-1)
//                        d=a[i+1][j];
//                    else
//                        d=0;
//                    if(j>0)
//                       l=a[i][j-1];
//                    else
//                        l=0;
//                    if(j<m-1)
//                        r=a[i][j+1];
//                    else
//                        r=0;
//
//                    ll mx=max({u,d,l,r});
//                    if(a[i][j]>mx)
//                    {
//                        a[i][j]=mx;
//                        //ok=true;
//                    }
//
//                }
//            }
//
//         for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<m;j++)
//            {
//                cout<<a[i][j]<<' ';
//            }
//            cout<<endl;
//        }
//    }
//}


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
//        ll n, m;
//        cin >> n >> m;
//
//        string sn;
//        cin >> sn;
//
//        vector<ll> a(m);
//        for (int i = 0; i < m; i++)
//        {
//            cin >> a[i];
//        }
//
//        string sm;
//        cin >> sm;
//
//        sort(sm.begin(), sm.end());
//
//        set<ll> st(a.begin(), a.end());
//
//        string res = sn;
//
//        if (st.size() == n)
//        {
//            for (int i = 0; i < n; i++)
//            {
//                res[i] = sm[i];
//            }
//        }
//        else
//        {
//            ll sm_index = 0;
//            for (int i = 0; i < n; i++)
//            {
//                if (st.find(i + 1) != st.end() && sm_index < m)
//                {
//                    res[i] = sm[sm_index++];
//                }
//            }
//        }
//
//        cout << res << endl;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        for (int i = 0; i < k; ++i) {
            x++;
            while (x % y == 0) {
                x /= y;
            }
        }

        cout << x << endl;
    }
}

int main() {
    solve();
    return 0;
}
