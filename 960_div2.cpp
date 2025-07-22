#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> freq;

        // Input and frequency counting
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            freq[v[i]]++;
        }

        bool f = false;
        // Check if any element has odd frequency
        for (auto &it : freq) {
            if (it.second % 2 != 0) {
                f = true;
                break;
            }
        }

        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}


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
//        vector<ll>v(n);
//        for(int i=0;i<n;i++)
//        {
//            cin>>v[i];
//        }
//        ll mx=*max_element(v.begin(),v.end());
//        ll cn=0;
//        for(int i=0;i<n;i++)
//        {
//            if(v[i]==mx)
//            {
//             cn++;
//            }
//
//        }
//        if(cn%2!=0)
//            cout<<"YES\n";
//        else if(cn%2==0&&n%2!=0)
//            cout<<"YES\n";
//        else
//            cout<<"NO\n";
//    }
//}
//
