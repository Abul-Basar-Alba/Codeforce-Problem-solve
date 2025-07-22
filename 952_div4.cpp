//A

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    ll t;
//    cin>>t;
//    while (t--)
//    {
//        string a, b;
//        cin >> a >> b;
//
//        char temp = a[0];
//        a[0] = b[0];
//        b[0] = temp;
//
//        cout << a << " " << b << endl;
//    }
//}
//

//B

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    ll t;
//    cin>>t;
//    vector<ll>res;
//    while(t--)
//    {
//        ll n;
//        cin >> n;
//
//        ll x= 2;
//        ll mxsum = 0;
//
//        for (int i = 2; i <= n; i++)
//        {
//            ll sum = 0;
//            for (int j= 1; j * i <= n; j++)
//            {
//                sum += j * i;
//            }
//            if (sum > mxsum)
//            {
//                mxsum = sum;
//                x = i;
//            }
//        }
//
//        res.push_back(x);
//    }
//
//
//    for (int v : res)
//    {
//        cout <<v<< endl;
//    }
//
//    return 0;
//}
//



//D

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n, m;
//        cin >> n >> m;
//
//        vector<string>grd(n);
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> grd[i];
//        }
//
//        ll x_sum = 0, y_sum = 0;
//        ll cn = 0;
//        for (int i = 0; i < n;i++)
//        {
//            for (int j = 0; j < m;j++)
//            {
//                if (grd[i][j] == '#')
//                {
//                    x_sum += (i + 1);
//                    y_sum += (j + 1);
//                    cn++;
//                }
//            }
//        }
//        ll x = x_sum /cn;
//        ll y = y_sum /cn;
//
//        cout << x << " " << y << endl;
//    }
//
//    return 0;
//}

//C

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        vector<ll>a(n);
//        for(int i=0;i<n;i++)
//            cin>>a[i];
//        ll sum=0,mx=0,cn=0;
//        for(int i=0;i<n;i++)
//        {
//          sum+=a[i];
//          if(mx<=a[i])//sum-x=x
//                mx=a[i];//sum=2*x;
//          if(2*mx==sum)
//            cn++;
//        }
//        cout<<cn<<endl;
//    }
//}


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
        ll x,y,z,k;
        cin>>x>>y>>z>>k;
        ll ans=0;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(i*j>k)//x*y>k
                    continue;
                if(k%(i*j))
                    continue;
                ll f=k/(i*j);//z
                if(f>z)
                    continue;
                ll res=(x+1-i)*(y+1-j)*(z+1-f);// how may way possible to set the secret box
                ans=max(ans,res);
            }
        }
        cout<<ans<<endl;
    }
}
