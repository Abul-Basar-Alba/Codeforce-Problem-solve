//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll n;
//    cin >> n;
//
//    set<ll>res;
//    res.insert(n);
//
//    ll cur= n;
//    while (true)
//    {
//        cur+= 1;
//        while (cur% 10 == 0)
//        {
//            cur/= 10;
//        }
//        if (res.count(cur))
//        {
//            break;
//        }
//        res.insert(cur);
//    }
//
//    cout << res.size() << endl;
//    return 0;
//}


#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n;
        cin>>x>>n;
        if(x%2==0)
        {
            if(n%4==0)
                cout<<x<<endl;
            else if(n%4==1)
            {
                cout<<x-n<<endl;
            }
            else if(n%4==2)
                cout<<x+1<<endl;
            else if(n%4==3)
                cout<<x+n+1<<endl;
        }
        else
        {
          if(n%4==0)
                cout<<x<<endl;
            else if(n%4==1)
            {
                cout<<x+n<<endl;
            }
            else if(n%4==2)
                cout<<x-1<<endl;
            else if(n%4==3)
                cout<<x-n-1<<endl;
        }
    }
}
