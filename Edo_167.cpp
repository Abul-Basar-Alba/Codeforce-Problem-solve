//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll x,y;
//        cin>>x>>y;
//        if(y<-1)
//        cout<<"NO\n";
//        else
//        cout<<"YES\n";
//    }
//}
//


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
        string s, sq;
        cin >> s >> sq;
        ll x = s.size();
        ll y = sq.size();

        if (s.find(sq) != string::npos)
        {
            cout << s.size() << endl;
            continue;
        }
        if (sq.find(s) != string::npos)
        {
            cout << sq.size() << endl;
            continue;
        }
            ll ans=x+y,c=0;
            for(int i=0;i<y;i++)
            {
                c=i;ll k=0;
                for(int j=0;j<x;j++)
                {
                  if(s[j]==sq[c])
                  {
                      c++;k++;
                  }
                }
                ans=min(ans,x+y-k);
            }
            cout<<ans<<endl;

    }
}

