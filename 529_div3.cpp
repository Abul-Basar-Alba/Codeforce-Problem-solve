//
//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll n;
//    cin >> n;
//    vector<int> a(n);
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//
//    sort(a.begin(), a.end());
//
//    ll x = a[n-2] - a[0];
//    ll y = a[n-1] - a[1];
//
//    cout << min(x,y) << endl;
//
//    return 0;
//}


#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    string S="AtCoder";
    string T="Land";
    if(s==S&&t==T)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
