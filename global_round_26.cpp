//
//
//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//void solve()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n;
//        cin >> n;
//        vector<int> a(n);
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> a[i];
//        }
//
//        if (a[0] == a[n - 1])
//        {
//            cout << "NO" << endl;
//        }
//        else
//        {
//            cout << "YES" << endl;
//            cout<<"BR";
//            for(int i=0;i<n-2;i++)
//                cout<<"B";
//            cout<<endl;
////            string s(n, 'R');
////            s[1] = 'B';
////            cout << s << endl;
//        }
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    solve();
//    return 0;
//}
//

#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        ll f=0;
        for(int i=1;i<n-1;i++)
          {
          if(s[i]=='0')
            f=1;
          }
        if(s[0]=='1'&&s[n-1]!='9'&&f==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
