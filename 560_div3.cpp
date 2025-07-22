//
//
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
//    vector<ll> a(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//
//    sort(a.begin(), a.end());
//
//    ll day= 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] >= day + 1)
//        {
//            day++;
//        }
//    }
//
//    cout << day<< endl;
//
//    return 0;
//}
//


#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x,y;
    cin >> n >> x >> y;
    string s;
    cin >> s;

    ll res= 0;

     if (s[n-y-1]== '0')
        res++;

    for (int i = n-x; i < n; i++)
    {
        if (i==n-y-1)
        {
           continue;
        }
        if (s[i] == '1')
        {
           res++;
        }
    }

    cout <<res<< endl;
    return 0;
}
