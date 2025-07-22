//A - Traveling Takahashi Problem 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     vector<pair<int,int>>v;
//     v.push_back({0, 0});
//     while(t--)
//     {
//       ll x,y;
//       cin>>x>>y;
//       v.push_back({x, y});
//     }
//     v.push_back({0, 0});
//     double res=0.0;
//     for (int i = 1; i < v.size(); i++) 
//     {
//         ll x1 = v[i - 1].first;
//         ll y1 = v[i - 1].second;
//         ll x2 = v[i].first;
//         ll y2 = v[i].second;
        
//         double dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//         res += dis;
//     }

//     cout << fixed << setprecision(20) << res<< endl;
// }

//B - Hands on Ring (Easy) 

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;

    ll l = 1, r = 2;
    ll move = 0;

    while (q--)
    {
        char c;
        ll x;
        cin >> c >> x;

        if (c == 'L')
        {

            if ((x > l && x < r) || (x < l && x + n < r + n))
            {
                if (l >= x)
                {
                    move += (l - x); 
                }
                else
                {
                    move += (l + n - x);
                }
            }
            else
            {
                
                if (x >= l)
                {
                    move += (x - l); 
                }
                else
                {
                    move += (n - l + x); 
                }
            }
            l = x; 
        }
        else if (c == 'R')
        {
            
            if ((x > r && x < l) || (x < r && x + n < l + n))
            {
               
                if (r >= x)
                {
                    move += (r - x); 
                }
                else
                {
                    move += (r + n - x); 
                }
            }
            else
            {
                
                if (x >= r)
                {
                    move += (x - r);
                }
                else
                {
                    move += (n - r + x); 
                }
            }
            r = x; 
        }
    }

    cout << move << endl;
    return 0;
}

