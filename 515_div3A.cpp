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
//    while(t--)
//    {
//        ll L,v,l,r;
//        cin>>L>>v>>l>>r;
//        if(v==1)
//        {
//            ll dis=r-l+1;
//            ll res=L;
//            res-=dis;
//            cout<<res<<endl;
//        }
//        else
//        {
//          ll res=L/v;
//          ll cn=0,dis=0;
//          if(l%v==0||r%v==0)
//          {
//              cn++;
//              dis=r-l;
//              cn+=(dis/v);
//          }
//          else
//          {
//              if(v>=l&&v<=r)
//              {
//                cn++;
//              dis=r-l;
//              if(dis%v==0)
//              cn+=((dis/v)-1);
//              else
//                cn+=(dis/v);
//              }
//              else
//              {
//                dis=r-l;
//                cn+=(dis/v);
//              }
//          }
//
//          res-=cn;
//          res=max(0,res);
//          cout<<res<<endl;
//        }
//    }
//}


#include<bits/stdc++.h>
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
        ll L, v, l, r;
        cin>>L>>v>>l>>r;

        if(v == 1)
        {
            ll dis = r - l + 1;
            ll res = L;
            res -= dis;
            cout << res << endl;
        }
        else
        {
            ll res= L / v;
            ll cn= 0;

            ll fb= (l + v - 1) / v;
            ll lb= r / v;

            if (fb<=lb)
            {
               cn=lb-fb+ 1;
            }

            res-=cn;
            cout << res << endl;
        }
    }
    return 0;
}
