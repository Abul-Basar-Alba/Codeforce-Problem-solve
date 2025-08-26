/*#include<bits/stdc++.h>
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
        ll a[n];
        ll b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        map<int,int>fq;
        for(auto c:a)
        {
            fq[c]++;
        }
        for(auto c:b)
        {
            fq[c]++;
        }
        int mx=0;
        for(int i=0;i<2*n;i++)
        {
           mx=max(mx,fq.second);
        }
        cout<<mx<<endl;
    }
}*/

// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() {
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         ll a[n];
//         ll b[n];
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> b[i];
//         }
//         map<int, int> fq;
//         for (auto c : a) {
//             fq[c]++;
//         }
//         for (auto c : b) {
//             fq[c]++;
//         }
//         int mx = 0;
//         for (auto it = fq.begin(); it != fq.end(); ++it) {
//             mx = max(mx, it->second);
//         }
//         cout << mx << endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// const int N = 1e5 + 5;
// const ll inf = 1e18;

// int n, e;
// vector<ll> dis(N, inf);
// vector<ll> parent(N, -1);

// void dijkstra(ll source, vector<pair<ll, ll>> g[]) 
// {
//     set<pair<ll,ll>>st;
//     dis[source] = 0;
//     st.insert({0, source});

//     while (st.size()>0) 
//     {
//         auto x = *st.begin();
//         ll node= x.second;
//         ll cur_dist=x.first;
//         st.erase(st.begin());

//         if (cur_dist > dis[node]) 
//         continue; 

//         for (auto it : g[node]) 
//         {
//             ll to_node = it.second;
//             ll to_dist = it.first;

//             if (dis[to_node] > dis[node] + to_dist)
//              {
//                 dis[to_node] = dis[node] + to_dist;
//                 parent[to_node] = node; 
//                 st.insert({dis[to_node], to_node});
//             }
//         }
//     }
// }

// vector<ll> Backtrack(ll x) 
// {
//     vector<ll> path;
//     for (int i = x; i != -1; i= parent[i]) 
//     {
//         path.push_back(i);
//     }
//     reverse(path.begin(), path.end());
//     return path;
// }

// int main()
// {
//     cin >> n >> e;
//     vector<pair<ll, ll>> g[n + 1];

//     for (int i = 0; i < e; i++)
//     {
//         ll v1, v2, w;
//         cin >> v1 >> v2 >> w;
//         g[v1].push_back({w, v2});
//         g[v2].push_back({w, v1});
//     }

//     dijkstra(1, g);

//     if (dis[n] == inf) 
//     {
//         cout << -1 << endl; 
//     }
//     else 
//     {
//         vector<ll> path = Backtrack(n);
//         for (int node : path) 
//         {
//             cout << node << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++) 
        cin >> a[i];
        for (int i = 0; i < n; i++) 
        cin >> b[i];

        map<ll, ll> freq1, freq2;

        ll cnt = 1;
        for (int i = 1; i < n; i++) 
        {
            if (a[i] == a[i - 1]) 
            {
                cnt++;
            } 
            else 
            {
                freq1[a[i - 1]] = max(freq1[a[i - 1]], cnt);
                cnt = 1;
            }
        }
        freq1[a[n - 1]] = max(freq1[a[n - 1]], cnt); 

        cnt = 1;
        for (int i = 1; i < n; i++) 
        {
            if (b[i] == b[i - 1]) 
            {
                cnt++;
            } 
            else 
            {
                freq2[b[i - 1]] = max(freq2[b[i - 1]], cnt);
                cnt = 1;
            }
        }
        freq2[b[n - 1]] = max(freq2[b[n - 1]], cnt); 

        ll mx = 0;
        set<ll> st;
        for (auto& x : freq1) 
        st.insert(x.first);
    
        for (auto& x : freq2)
        st.insert(x.first);

        for (ll val : st) 
        {
            ll total = freq1[val] + freq2[val];
            mx = max(mx, total);
        }

        cout << mx << endl;
    }
    return 0;
}
