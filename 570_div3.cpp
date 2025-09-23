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
//        ll n,k;
//        cin >> n>>k;
//        vector<ll> a(n);
//
//        for (int i = 0; i < n; i++)
//        {
//            cin >> a[i];
//        }
//        sort(a.begin(),a.end());
//        ll res=a[0]+k;
//        if(a[n-1]-k>res)
//            cout<<-1<<endl;
//        else
//            cout<<res<<endl;
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
//        ll n;
//        cin >> n;
//        vector<ll> a(n);
//        ll odd=0,e=0,res=0;
//        for (int i = 0; i < n; i++)
//        {
//            cin >> a[i];
//            if(a[i]%3==0)
//                res++;
//            else if(a[i]%3==1)
//                odd++;
//            else
//                e++;
//        }
//        res+=min(odd,e);
//        res+=abs(odd-e)/3;
//        cout<<res<<endl;
//    }
//}


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
    for (int i = 0; i < x; i++)
    {
        if (i == y)
        {
            if (s[n - x + i] != '1')
            {
                res++;
            }
        }
        else
        {
            if (s[n - x + i] != '0')
            {
                res++;
            }
        }
    }

    cout <<res<< endl;
    return 0;
}
