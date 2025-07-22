
// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll a1,a2,a3,a4;
//     cin>>a1>>a2>>a3>>a4;
//     map<ll,ll>mp;
//     mp[a1]++;
//     mp[a2]++;
//     mp[a3]++;
//     mp[a4]++;
//     ll cn=0;
//     for(auto it:mp)
//     {
//         cn += it.second / 2;
//     }
//     cout<<cn<<endl;

// }


//B - Garbage Collection 

// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin >> n;
//     vector<ll> q(n + 1), r(n + 1);
//     for (ll i = 1; i <= n; i++) 
//     {
//         cin >> q[i] >> r[i];
//     }
//     ll Q;
//     cin>>Q;
//     while(Q--)
//     {
//         ll t,d;
//         cin>>t>>d;
//         ll x=q[t],res=r[t];
//         ll md=d%x;
//         if(md==res)
//         {
//             cout<<d<<endl;
//         }
//         else if(md<res)
//         {
//             cout<<(d+(res-md))<<endl;
//         }
//         else
//         {
//            ll rem=x-md;
//            cout<<(d+(rem+res))<<endl;
//         }
//     }
// }


// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin >> n;
//     vector<ll> a(n + 1);
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }

//     map<ll, ll> pos; 
//     vector<ll> b(n + 1);      

//     for (int i = 1; i <= n; i++) 
//     {
//         if (pos.find(a[i]) != pos.end()) 
//         {
            
//             b[i] = pos[a[i]];
//         } 
//         else 
//         {
           
//             b[i] = -1;
//         }
        
//         pos[a[i]] = i;
//     }

    
//     for (int i = 1; i <= n; i++) 
//     {
//         cout << b[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define ll ll


// const int dx[] = {-1, 1, 0, 0};
// const int dy[] = {0, 0, -1, 1};

// ll H, W, K;
// vector<string> g;
// ll res = 0;

// void dfs(ll x, ll y, ll step, vector<vector<bool>> &vis) 
// {
   
//     if (step == K) 
//     {
//         res++;
//         return;
//     }

    
//     vis[x][y] = true;

  
//     for (int i = 0; i < 4; i++)
//      {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

       
//         if (nx >= 0 && nx < H && ny >= 0 && ny < W && !vis[nx][ny] && g[nx][ny] == '.') 
//         {
//             dfs(nx, ny, step + 1, vis);
//         }
//     }

//     vis[x][y] = false;
// }

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> H >> W >> K;
//     g.resize(H);
//     for (int i = 0; i < H; i++) 
//     {
//         cin >> g[i];
//     }

//     vector<vector<bool>> vis(H, vector<bool>(W, false));

//     for (int i = 0; i < H; i++) 
//     {
//         for (int j = 0; j < W; j++) 
//         {
//             if (g[i][j] == '.') 
//             {
//                 dfs(i, j, 0, vis);
//             }
//         }
//     }

//     cout << res << "\n";
//     return 0;
// }




#include <bits/stdc++.h>
#define ll ll
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    vector<ll> pre(n + 1, 0);
    for (int i = 0; i < n; i++) 
    {
        pre[i + 1] = pre[i] + a[i];
    }

    ll res = 0;
    for (int l = 0; l < n; l++) 
    {
        for (int r = l; r < n; r++) 
        {
            ll sum= pre[r + 1] - pre[l];
            res += sum % m;
        }
    }

    cout << res << endl;

    return 0;
}
