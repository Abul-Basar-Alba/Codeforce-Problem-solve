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
//     ll n,k;
//     cin>>n>>k;
//     if(k==0)
//     {
//         cout<<0<<endl;
//         continue;
//     }
//     if(k<=n)
//     {
//         cout<<1<<endl;
//         continue;
//     }
//     ll mn=1,f=0;
//     ll tem=n;
//     for(int i=1;i<=(2*n-1)/2;i++)
//     {
//       while(f<2)
//       {
//           tem+=(n-i);
//           f++;
//           mn++;
//           if(tem>=k)
//            break;
//       }
//       if(tem>=k)
//         break;
//       f=0;
//     }
//     cout<<mn<<endl;
//    }
//    return 0;
//}

//B

#include <bits/stdc++.h>
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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        ll mx= 0;
        if (m == 1)
        {
            for (int i = 0; i < n; ++i)
            {
                if (a[i] <= m)
                {
                    mx = max(mx, a[i]);
                }
            }
        }
        else
        {
        sort(a.begin(), a.end());

        ll cur = 0;
        int l=0;

        for (int r = 0; r < n; r++)
        {
            cur+= a[r];
            while (a[r] - a[l] > 1 || cur> m) //Sliding Window Technique
            {
                cur -= a[l];
                l++;
            }

            if (cur<= m && (a[r] - a[l] <= 1))
            {
                mx = max(mx, cur);
            }
        }

        }

        cout << mx << "\n";
    }
    return 0;
}

