//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//   // cout<<"safety"<<endl;
//    ll n;
//    cin >> n;
//    vector<ll>a(n);
//    for (int i = 0; i <n;i++)
//    {
//        cin >> a[i];
//    }
//
//    ll res= 0;
//
//    for (int i = 0; i < n;i++)
//    {
//        for (int j = i + 1; j < n;j++)
//        {
//            res+= max(a[j] - a[i], 0LL);
//        }
//    }
//
//    cout << res<< endl;
//    return 0;
//}
//

//
//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//    ll x,y;
//    cin>>x>>y;
//    ll sum=x+y;
//    for(int i=0;i<=9;i++)
//    {
//        if(sum!=i)
//        {
//            cout<<i<<endl;
//            break;
//        }
//    }
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//using ll = ll;
//
//int main()
//{
//    ll N = 1e5;
//    vector<bool> mark(N+1, false);
//    vector<int> prime;
//
//    mark[0] = mark[1] = true;
//
//    for (int i = 2; i <= N;i++)
//    {
//        if (!mark[i])
//        {
//            prime.push_back(i*i);
//            for (ll j = (ll)i * i; j <= N; j += i)
//            {
//                mark[j] = true;
//            }
//        }
//    }
//
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        ll tem=n;
//        auto a = lower_bound(prime.begin(), prime.end(), n);
//        n-=a;
//        auto b = lower_bound(prime.begin(), prime.end(), n);
//        n-=b;
//        auto c = lower_bound(prime.begin(), prime.end(), n);
//        if(a+b+c==tem)
//            cout<<"yes\n";
//        else
//            cout<<"NO\n":
//    }
//    return 0;
//}


#include<bits/stdc++.h>
#define ll ll int
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

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

        bool found = false;

        for (int a = 2; a < n;a++)
        {
            if (!isPrime(a)) continue;
            for (int b = a + 1; b < n;b++)
            {
                if (!isPrime(b)) continue;
                    if (a * a + b * b +4 ==n)
                    {
                        found = true;
                        break;
                    }
                if (found) break;
            }
            if (found) break;
        }

        if (found) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//const int N = 100000;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    vector<bool> is_prime(N + 1, true);
//    vector<ll> prime;
//    is_prime[0] = is_prime[1] = false;
//
//    for (int i = 2; i <= N; ++i)
//    {
//        if (is_prime[i])
//        {
//            prime.push_back(i);
//            for (int j = i * 2; j <=N; j += i)
//            {
//                is_prime[j] = false;
//            }
//        }
//    }
//
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//
//        ll len= prime.size();
//        bool found = false;
//        for (int i = 0; i < len;i++)
//        {
//            ll j = i + 1, k = len - 1;
//            while (j < k)
//            {
//                ll sum = prime[i]*prime[i] + prime[j]*prime[j] + prime[k]*prime[k];
//                if (sum == n)
//                {
//                    found = true;
//                    break;
//                }
//              else if (sum < n)
//                {
//                    j++;
//                }
//               else
//                {
//                    k--;
//                }
//            }
//            if (found) break;
//        }
//
//        if (found)
//        {
//            cout << "YES\n";
//        }
//        else
//        {
//            cout << "NO\n";
//        }
//    }
//
//    return 0;
//}
