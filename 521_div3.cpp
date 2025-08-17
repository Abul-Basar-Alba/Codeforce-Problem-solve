/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"safety"<<endl;
        ll n;
        cin>>n;
        ll a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll k=0;
        for(int i=1;i<n;i++)
        {
            if(a[i-1]==1&&a[i]==0&&a[i+1]==1)
            {
                a[i+1]=0;
                k++;
            }
        }
        cout<<k<<endl;

}
*/


// this my logic
//c.good array

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//        ll n;
//        cin>>n;
//    vector<ll> a(n);
//    ll sum = 0;
//
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> a[i];
//        sum += a[i];
//    }
//
//   map<ll,ll>mp;
//    for (int i = 0; i < n; ++i)
//    {
//        mp[a[i]]++;
//    }
//
//    vector<ll>v;
//    for (int i = 0; i < n;i++)
//    {
//        ll tem=sum - a[i];
//        ll val = tem / 2;
//
//        if (tem % 2 == 0 &&mp[val] > 0)
//        {
//            if (val== a[i])
//            {
//                if (mp[val] > 1)
//                {
//                    v.push_back(i + 1);
//                }
//            }
//           else
//            {
//                v.push_back(i + 1);
//            }
//        }
//    }
//
//    cout << v.size() << endl;
//    for (int idx : v)
//    {
//        cout << idx << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

// using multiset same code

//#include<bits/stdc++.h>
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
//    vector<ll> a(n);
//    ll sum = 0;
//
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> a[i];
//        sum += a[i];
//    }
//
//    multiset<ll> ms;
//    for (int i = 0; i < n; ++i)
//    {
//        ms.insert(a[i]);
//    }
//
//    vector<ll> v;
//    for (int i = 0; i < n; i++)
//    {
//        ll tem = sum - a[i];
//        ll val = tem / 2;
//
//        ms.erase(ms.find(a[i]));
//
//        if (tem % 2 == 0 && ms.find(val) != ms.end())//ms.count(val) > 0 also work
//        {
//            v.push_back(i + 1);
//        }
//
//        ms.insert(a[i]);
//    }
//
//    cout << v.size() << endl;
//    for (int idx : v)
//    {
//        cout << idx << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"safety"<<endl;
        ll n;
        cin>>n;
        ll a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
       map<ll,ll>mp;

    vector<ll>v;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    ll sum = accumulate(a,a + n, 0LL);

    for (int i = 0; i < n; i++)
    {
        ll temp = sum - a[i];
        if (mp[a[i]]>1)
        {
            auto it = mp.rbegin();
            ll y = it->first;
            if (y == temp - y)
            {
                v.push_back(i + 1);
            }
        }
       else
        {
            mp[a[i]]--;
            if (mp[a[i]] == 0)
            {
                mp.erase(a[i]);
            }
            auto it = mp.rbegin();
            ll y = it->first;
            if (y == temp - y)
            {
                v.push_back(i + 1);
            }
            mp[a[i]]++;
        }
    }

    cout << v.size() << endl;
    for (int i :v)
    {
        cout << i << " ";
    }

    return 0;
}*/
