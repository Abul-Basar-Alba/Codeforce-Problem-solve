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
//       ll n;
//       cin>>n;
//       vector<ll>a(n);
//       for(int i=0;i<n;i++)
//       {
//           cin>>a[i];
//       }
//       sort(a.begin(),a.end());
//       vector<ll>b,c;
//       ll mx=a[n-1];
//
//       for(int i=0;i<n;i++)
//       {
//           if(a[i]==mx)
//           {
//            c.push_back(a[i]);
//           }
//           else
//            b.push_back(a[i]);
//       }
//       if(b.empty()||c.empty())
//        cout<<-1<<endl;
//       else
//       {
//           cout<<b.size()<<' '<<c.size()<<endl;
//           for(int i:b)
//            cout<<i<<' ';
//           cout<<endl;
//           for(int i:c)
//            cout<<i<<' ';
//           cout<<endl;
//       }
//    }
//    return 0;
//}


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    ll t;
//    cin >> t;
//    while (t--)
//    {
//     ll n;
//     cin>>n;
//     ll sum=0;
//     ll mn1=INT_MAX;
//     ll mn2=INT_MAX;
//     while(n--)
//     {
//         ll m;
//         cin>>m;
//         vector<ll>v(m);
//         for(int i=0;i<m;i++)
//         cin>>v[i];
//         sort(v.begin(),v.end());
//         sum+=v[1];
//         mn1=min(v[0],mn1);
//         mn2=min(v[1],mn2);
//     }
//     sum-=mn2;
//     sum+=mn1;
//     cout<<sum<<endl;
//    }
// }

