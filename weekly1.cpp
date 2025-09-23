//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll n, i;
//    cin >> n >> i;
//
//    if (n & (1 << i)) {
//        cout << "true" << endl;
//    } else {
//        cout << "false" << endl;
//    }
//
////     ll n,i;
////     cin>>n>>i;
////     bitset<32>v(n);
////     if(v[i]==1)
////        cout<<"true\n";
////     else
////        cout<<"false\n";
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
//    ll x;
//    cin >> x;
//    ll cn = 0;
//
//    while (x > 0)
//    {
//        if (x % 2 == 1)
//        {
//            cn++;
//        }
//        x /= 2;
//    }
//
//    cout << cn << endl;
//    return 0;
//}


//#include <bits/stdc++.h>
//#define ll ll int
//const int N=1000000;
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//
//    vector<ll>n(t);
//    for (int i = 0; i < t;i++)
//    {
//        cin >> n[i];
//    }
//
//    vector<ll> sum(N+ 1, 0);
//
//    for (int i = 1; i <= N;i++)
//    {
//        for (int j = 2*i; j <=N; j += i)
//        {
//            sum[j] += i;
//        }
//    }
//
//    for (int i = 0; i < t;i++)
//    {
//        ll tem=n[i];
//        ll chek=sum[tem];
//        if (tem==chek)
//        {
//            cout << "perfect" << endl;
//        }
//        else if (chek > tem)
//        {
//            cout << "abundant" << endl;
//        }
//       else
//        {
//            cout << "deficient" << endl;
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
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll n;
//    cin >> n;
//    vector<ll> p(n);
//
//    for (ll i = 0; i < n; i++)
//    {
//        cin >> p[i];
//    }
//
//    ll sum= accumulate(p.begin(), p.end(), 0LL);
//
//    ll mn= LLONG_MAX;
//
//    for (ll i = 0; i < (1 << n); i++)
//    {
//        ll g1 = 0;
//        for (ll j = 0; j < n; j++)
//        {
//            if (i & (1 << j))
//            {
//                g1+= p[j];
//            }
//        }
//        ll g2 = sum - g1;
//        ll dif= abs(g1 - g2);
//        mn= min(mn,dif);
//    }
//
//    cout << mn << endl;
//
//    return 0;
//}


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    ll n;
//    cin >> n;
//    vector<ll> a(n);

//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }

//    bool ok = false;
//    for (ll i = 0; i < (1 << n); i++)
//    {
//        ll sum = 0;
//        for (ll j = 0; j < n; j++)
//        {
//            if (i & (1 << j))
//            {
//                sum += a[j];
//            }
//            else
//            {
//                sum -= a[j];
//            }
//        }
//        if (sum % 360 == 0)
//        {
//            ok = true;
//            break;
//        }
//    }

//    if (ok)
//    {
//        cout << "YES\n";
//    }
//    else
//    {
//        cout << "NO\n";
//    }

//    return 0;
// }



#include <bits/stdc++.h>
#define ll ll int
using namespace std;

const int N = 1000000;

vector<ll> divisor[N + 1];

void solve()
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N; j += i)
        {
            divisor[j].push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    solve();

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll g = __gcd(a, b);

        cout << divisor[g].size() << "\n";
    }

    return 0;
}
