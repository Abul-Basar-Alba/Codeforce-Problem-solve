// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll a,b,c ,d;
//         cin>>a>>b>>c>>d;
//         if((a<b&&c<d)||(c<d&&c<b)||(a<b&&a<d))
//         cout<<"Flower\n";
//         else
//         cout<<"Gellyfish\n";
//     }
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

// fast power of 2 modulo
int pow2(int e) {
    static vector<int> p = {1};
    while ((int)p.size() <= e) {
        p.push_back((ll)p.back() * 2 % MOD);
    }
    return p[e];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n), q(n);
        for (int &x : p) cin >> x;
        for (int &x : q) cin >> x;

        // prefix max trackers
        vector<int> prefP(n), idxP(n), prefQ(n), idxQ(n);
        prefP[0] = p[0];  idxP[0] = 0;
        prefQ[0] = q[0];  idxQ[0] = 0;
        for (int i = 1; i < n; i++) {
            if (p[i] > prefP[i-1]) {
                prefP[i] = p[i];
                idxP[i]  = i;
            } else {
                prefP[i] = prefP[i-1];
                idxP[i]  = idxP[i-1];
            }
            if (q[i] > prefQ[i-1]) {
                prefQ[i] = q[i];
                idxQ[i]  = i;
            } else {
                prefQ[i] = prefQ[i-1];
                idxQ[i]  = idxQ[i-1];
            }
        }

        // compute r in O(n)
        for (int i = 0; i < n; i++) {
            // candidate 1: use j = idxP[i]
            int j1 = idxP[i];
            ll cand1 = (ll)pow2(prefP[i]) + pow2(q[i - j1]);

            // candidate 2: use j = i - idxQ[i]
            int j2 = i - idxQ[i];
            ll cand2 = (ll)pow2(prefQ[i]) + pow2(p[j2]);

            int ri = max(cand1, cand2) % MOD;
            cout << ri << (i+1<n? ' ' : '\n');
        }
    }
    return 0;
}
