
//A. Greedy Monocarp

// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
//    {
//       ll n, k;
//       cin >> n >> k;
//       vector<ll> v(n);
      
//       for(int i = 0; i < n; i++)
//       {
//          cin >> v[i];
//       }
   
//       sort(v.rbegin(), v.rend());
      
//       ll sum = 0;
//       ll add = 0;
      
//       for(int i = 0; i < n; i++)
//       {
//          sum += v[i];
         
//          if(sum >= k)
//          {
           
//             if(sum > k)
//             {
               
//                add += (k - (sum - v[i]));
//             }
//             break;
//          }
//       }
      
     
//       if(sum < k)
//       {
//          add += (k - sum);
//       }
      
//       cout << add << endl;
//    }
// }

//B. Game with Colored Marbles

#include<bits/stdc++.h>
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
        ll n;
        cin >> n;
        vector<ll> v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        map<ll, ll> freq;
        
        for (int i = 0; i < n; i++)
        {
            freq[v[i]]++;
        }
        
        ll score = 0;
        ll cn = 0;

        for (auto &it : freq)
        {
            if(it.second == 1)
                cn++;
            else
                score++;
        }
        
        ll x = (cn + 1) / 2;  
        score += (x * 2);
        
        cout << score << "\n"; 
    }
    
    return 0;
}



