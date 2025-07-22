//
//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ll n;
//    cin >> n;
//    vector<ll> a(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//
//    sort(a.rbegin(), a.rend());
//    ll x = a[0];
//    vector<ll> tem;
//
//    for (ll i = 1; i < n; i++)
//    {
//        if (x % a[i] != 0 || (x % a[i] == 0 && count(a.begin(), a.end(), a[i]) > 1))
//        {
//            tem.push_back(a[i]);
//        }
//    }
//
//    ll y = *max_element(tem.begin(), tem.end());
//    cout << x << ' ' << y << endl;
//
//    return 0;
//}



//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        string s;
//        cin >> s;
//
//        bool ok = true;
//        if (isupper(s[0]))
//        {
//            ok= false;
//        }
//        for (char c : s)
//        {
//            if (!isalpha(c))
//            {
//                ok= false;
//                break;
//            }
//        }
//
//        if (!ok)
//        {
//            cout << "NO" << endl;
//            continue;
//        }
//
//        ll cn= 1;
//        for (int i = 1; i < s.size();i++)
//        {
//            if (isupper(s[i]))
//            {
//                cn++;
//            }
//        }
//
//        if (cn <= 7)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//}
//


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll x1,y1,x2,y2;
//        cin>>x1>>y1>>x2>>y2;
//        ll res=abs(x1-x2)+abs(y1-y2);
//        cout<<res<<endl;
//    }
//}

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ll t;
//    cin>>t;
//    string s= "abcdefghijklmnopqrstuvwxyz";
//    string sr = "";
//    while (sr.size() <10000)
//    {
//        sr+=s;
//    }
//    while(t--)
//    {
//        string p;
//        cin >> p;
//        if (sr.find(p) != string::npos)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//}
//
//
//


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//       ll n, k;
//        cin >> n >> k;
//
//        k=min(k,n);
//        vector<ll> a(n);
//        for (int i = 0; i < n;i++)
//        {
//            cin >> a[i];
//        }
//
//        sort(a.begin(), a.end());
//
//        for (int i = 0; i < n && k > 0;i++)
//        {
//                a[i] =(-1LL*a[i]);
//                --k;
//        }
//
//        ll sum = 0;
//        for (ll num : a)
//        {
//            sum += num;
//        }
//
//        cout << sum << endl;
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
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//       ll n, k;
//        cin >> n >> k;
//
//        vector<ll> a(n);
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> a[i];
//        }
//
//        sort(a.begin(), a.end());
//
//        for (int i = 0; i < n && k > 0 && a[i] < 0; ++i)
//        {
//            a[i] = -a[i];
//            --k;
//        }
//
//        if (k > 0 && k % 2 == 1)
//        {
//            sort(a.begin(), a.end());
//            a[0] = -a[0];
//        }
//
//        ll sum = 0;
//        for (ll num : a)
//        {
//            sum += num;
//        }
//
//        cout << sum << endl;
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
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//       ll n, m;
//        cin >> n >> m;
//
//        string s, c, p;
//        cin >> s >> c >> p;
//
//        map<char,int> mp;
//        for (int i = 0; i < n; i++)
//        {
//            if (mp.find(s[i]) == mp.end())
//            {
//                mp[s[i]] = c[i] - '0';
//            }
//            else
//            {
//                mp[s[i]] = min(mp[s[i]], c[i] - '0');
//            }
//        }
//
//        ll res= 0;
//        bool ok= true;
//        for (char ch : p)
//        {
//            if (mp.find(ch) != mp.end())
//            {
//                res +=mp[ch];
//            }
//            else
//            {
//                ok= false;
//                break;
//            }
//        }
//
//        if (ok)
//        {
//            cout <<res<< endl;
//        }
//        else
//        {
//            cout << -1 << endl;
//        }
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
//    int t;
//    scanf("%d", &t);
//    while (t--)
//    {
//        int n, m;
//        scanf("%d %d", &n, &m);
//        int grid[n][m];
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                scanf("%d", &grid[i][j]);
//            }
//        }
//
//        for (int i = 0; i < n; i++)
//        {
//            sort(grid[i], grid[i] + m);
//        }
//
//        int res=0;
//        for (int j = 0; j < m;j++)
//        {
//            for (int i = 1; i < n;i++)
//            {
//                if (grid[i][j] == grid[i - 1][j])
//                {
//                    res++;
//                }
//            }
//        }
//        printf("%d\n",res);
//    }
//    return 0;
//}


#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 1005;
const int MAXM = 1005;
int freq[MAXN][MAXM]; // Frequency array for values in each column

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, m;
        scanf("%d %d", &n, &m);

        // Initialize frequency array
        memset(freq, 0, sizeof(freq));

        // Input grid values and update frequency
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int val;
                scanf("%d", &val);
                freq[val][j]++;
            }
        }

        // Calculate the beauty of the grid
        int beauty = 0;
        for (int j = 0; j < m; ++j) {
            // Find the value with maximum frequency in column j
            int max_freq = 0;
            for (int val = 1; val <= 100000000; ++val) {
                if (freq[val][j] > max_freq) {
                    max_freq = freq[val][j];
                }
            }

            // Increment beauty by max_freq - 1 (number of equal adjacent pairs)
            beauty += (max_freq - 1);
        }

        // Output the result for the current test case
        printf("%d\n", beauty);
    }

    return 0;
}
