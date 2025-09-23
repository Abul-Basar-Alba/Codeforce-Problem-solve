//A - Cut .0 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     double x;
//     cin>>x;
//     cout<<x<<endl;
// }

//B - Decrease 2 max elements 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     ll res=0;
//     while(1)
//     {
//         sort(v.rbegin(),v.rend());
        
//         if(v.size()<=1)
//         {
//             break;
//         }
//         v[0]--;
//         v[1]--;
//         v.erase(remove(v.begin(), v.end(), 0), v.end());
//         res++;
//     }
//     cout<<res<<endl;
// }

//C - Enumerate Sequences 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n, k;
//     cin >> n >> k;
//     vector<ll> r(n); 
//     for (int i = 0; i < n; ++i) 
//     {
//         cin >> r[i];
//     }

//     vector<vector<ll>> res; 

//     vector<ll> cur(n, 1);

//     while (true)
//      {

//         ll sum = 0;
//         for (int i = 0; i < n; ++i) 
//         {
//             sum += cur[i];
//         }

//         if (sum % k == 0)
//         {
//             res.push_back(cur);
//         }

//         ll pos = n - 1;
//         while (pos >= 0 && cur[pos] == r[pos]) 
//         {
//             cur[pos] = 1; 
//             pos--;          
//         }

//         if (pos < 0) break;

//         cur[pos]++;
//     }

//     for (auto seq : res) 
//     {
//         for (ll x : seq) 
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//F - Minimum Steiner Tree 

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

const ll N = 1e5 + 7;
bool vis[N];

void bfs(ll start, vector<vector<ll>>& tree, vector<ll>& v) 
{
    ll mn = 0;
    queue<ll> q;
    q.push(start);
    vis[start] = true;
    mn++;
    

    v.erase(remove(v.begin(), v.end(), start), v.end());

    while (!q.empty() && !v.empty()) 
    {
        ll node = q.front();
        q.pop();

        v.erase(remove(v.begin(), v.end(), node), v.end());

        for (ll child : tree[node]) 
        {
            if (!vis[child]) 
            {
                q.push(child);
                vis[child] = true;
                mn++;
                v.erase(remove(v.begin(), v.end(), child), v.end());
            }
        }
    }

    cout << mn << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;
    
    vector<vector<ll>> tree(n + 1);
    
    for (int i = 0; i < n - 1; i++) 
    { 
        ll v1, v2;
        cin >> v1 >> v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }

    vector<ll> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }

    ll start = v[0];
    bfs(start, tree, v);

    return 0;
}
