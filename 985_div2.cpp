// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         string s, r;
//         cin >> s >> r;
        
//         ll one = 0, zero = 0;
//         for (char c : s)
//         {
//             if (c == '0')
//                 zero++;
//             else if (c == '1')
//                 one++;
//         }
        
//         bool ok = true;
//         for (char c:r)
//         {
//             if (c == '0')
//             {
//                 if (one > 0 && zero>0)
//                 {
//                     one--;
                    
//                 }
//                 else
//                 {
//                     ok = false;
//                     break;
//                 }
//             }
//             else if (c == '1')
//             {
                
//                 if (zero > 0 && one>0)
//                 {
//                     zero--;
                    
//                 }
//                 else
//                 {
//                     ok = false;
//                     break;
//                 }
//             }
//         }
        
//         if (ok)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
// 	int N;
// 	cin >> N;
// 	vector<int> A(N);
// 	for(int i = 0; i < N; i++) cin >> A[i];
// 	int cur = 0;
// 	int skip = -1e9;
// 	int done = -1e9;
// 	for(int i = 0; i <= N; i++){
// 		done = max(done, skip);
// 		skip = max(skip, cur);
// 		if(i < N){
// 			if(A[i] < cur) cur--;
// 			if(A[i] > cur) cur++;
// 			if(A[i] < done) done--;
// 			if(A[i] > done) done++;
// 		}
// 	}
// 	cout << done << '\n';

#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
    cin >> a[i];
    ll cur = 0;
    ll skip = -1e9;
    ll done = -1e9;
    for (ll i = 0; i <= n; i++)
    {
        done = max(done, skip);
        skip = max(skip, cur);
        if (i < n)
        {
            if (a[i] < cur) 
                cur--;
            if (a[i] > cur) 
                cur++;
            if (a[i] < done) 
                done--;
            if (a[i] > done) 
                done++;
        }
    }
    cout << done << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}