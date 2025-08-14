// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void Basar()
// {
//     string s, tt;
//     cin >> s >> tt;

//     map<char, vector<int>> locs, loct;

//     for (int i = 1; i < s.size(); i++)
//         locs[s[i]].push_back(i);
//     for (int i = 0; i + 1 < tt.size(); i++)
//         loct[tt[i]].push_back(i);

//     string mn = "";
//     bool ok = false;

//     for (auto &p : locs) 
//     {
//         char c = p.first;
//         vector<int> &v = p.second;

//         if (loct.count(c)) 
//         {
//             ll x = v.front();
//             ll y = loct[c].back();
//             string res = s.substr(0, x) + tt.substr(y);
//             if (!ok || res.size() < mn.size()) 
//             {
//                 mn = res;
//                 ok = true;
//             }
//         }
//     }

//     if (!ok)
//         cout << -1 << '\n';
//     else
//         cout << mn << '\n';
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     Basar();
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string s, t;
    cin >> s >> t;

    int last_t[26];
    fill(last_t, last_t + 26, -1);
    for (int i = 0; i + 1 < t.size(); i++)
        last_t[t[i] - 'a'] = i;

    int best_x = -1, best_y = -1;
    int best_len = INT_MAX;

    for (int i = 1; i < s.size(); i++) 
    {
        int c = s[i] - 'a';
        if (last_t[c] != -1) 
        {
            int len = i + t.size() - last_t[c];
            if (len < best_len) 
            {
                best_len = len;
                best_x = i;
                best_y = last_t[c];
            }
        }
    }

    if (best_x == -1) {
        cout << "-1\n";
        return;
    }

    for (int i = 0; i < best_x; i++)
        cout << s[i];
    for (int i = best_y; i < t.size(); i++)
        cout << t[i];
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
