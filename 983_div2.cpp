// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int t; 
//     cin >> t;
    
//     while (t--) 
//     {
//         int n; 
//         cin >> n;
        
//         vector<int>v(2 * n); 
//         int cnt_one = 0;
//         int cnt_zero=0;
        
//         for (int i = 0; i < 2 * n; ++i) 
//         {
//             cin >>v[i];
//             if (v[i] == 1) 
//             {
//                cnt_one++;
//             }
//             else
//             cnt_zero++;
//         }
        

        
//         int min_on = cnt_one % 2;        
//         int max_on = min(cnt_zero, cnt_one);   
        
//         cout << min_on << " " << max_on << endl;
//     }
    
//     return 0;
// }


#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
          if(v[n-1]>=2*v[i])
          cnt++;
          else
          break;
        }
        cout<<cnt<<endl;
    }
}

// #include<bits/stdc++.h>
// #define ll long long int 
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         vector<int> a(n);
        
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }

//         sort(a.begin(), a.end());

//         set<int> dis(a.begin(), a.end());
        
//         if (dis.size() < 2) 
//         {
//             cout << n - 1 << endl; 
//             continue;
//         }

//         auto it = dis.end();
//         it--;
//         int max1 = *it;
//         it--;
//         int max2 = *it; 

//         int need= 0;
//         for (int i = 0; i < n; ++i) 
//         {
//             if (a[i] != max1 && a[i] != max2) 
//             {
//                 need++;
//             }
//         }

//         cout << need << endl; 
//     }
//     return 0;
// }
