//A

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     int t;
//     cin >> t; 

//     while (t--) 
//     {
//         int n, x;
//         cin >> n >> x;

//         string s;
//         cin >> s;

//         bool ok = false;
        
//         for (int i = 0; i < n; i++) 
//         {
//             int tem = s[i] - '0';
            
//             if (x > tem) 
//             {  
//                 char ch = x + '0';
//                 s.insert(i, 1, ch);
//                 ok = true;
//                 break;
//             }
//         }
        
//         if (!ok) 
//         {
//             s += (x + '0');
//         }
        
//         cout << s << endl;
//     }

//     return 0;
// }

//B

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,x1,y1,x2,y2;
//         cin>>n>>x1>>y1>>x2>>y2;
//         ll x=min({(x1-1),(y1-1),(n-y1),(n-x1)});
//         ll y=min({(x2-1),(y2-1),(n-y2),(n-x2)});
//         if(x<y)
//         swap(x,y);
//         cout<<x-y<<endl;
//     }
// }

#include <bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>b(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin>>b[i];
        }
        vector<ll>a(n);
        a[0]=b[0];
        for(int i=1;i<n-1;i++)
        {
            ll x=min(b[i],b[i-1]);
            a[i]=x;
        }
        a[n-1]=b[n-2];
        for(int i:a)
        cout<<i<<" ";
        cout<<endl;
    }
}