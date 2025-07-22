//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        ll a[n];
//        for(int i=0;i<n;i++)
//        {
//            cin>>a[i];
//        }
//        sort(a,a+n);
//        ll sum=0;
//        for(int i=0,j=n-1;i<n/2;i++,j--)
//        {
//            ll x=abs(a[j]-a[i]);
//            sum+=x;
//        }
//        cout<<sum<<endl;
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
//    ll t;
//    cin>>t;
//
//    while (t--)
//    {
//        ll n,k;
//        cin >>n>>k;
//
//        vector<ll>v(n);
//        for (int i = 0; i < n;i++)
//        {
//            cin >>v[i];
//        }
//
//        string s;
//        for (int i = 0; i <n;i++)
//        {
//            if (v[i] %k== 0)
//            {
//               s += '1';
//            }
//           else
//            {
//                s += '0';
//            }
//        }
//
//        cout <<s << endl;
//    }
//
//    return 0;
//}


//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//        ll n,k;
//        cin >>n>>k;
//
//        vector<ll>v(n);
//        for (int i = 0; i < n;i++)
//        {
//            cin >>v[i];
//        }
//    ll res = (n-1 + k- 2)/(k- 1);
//    cout << res<< endl;
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        unsigned int A, B, N;
        cin >> A >> B >> N;

        if (A == B) {
            cout << 0 << endl;
            continue;
        }

        unsigned int C = A ^ B;

        if (C < N) {
            cout << 1 << endl;
        } else if (N <= 1) {
            cout << -1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}

