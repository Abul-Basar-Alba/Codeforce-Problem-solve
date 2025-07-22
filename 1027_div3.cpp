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
//         string s;
//         cin >> s;
//         ll a= stoll(s.substr(0, 2));
//         ll b= stoll(s.substr(2, 2));
//         ll x= stoll(s.substr(0, 4));
//         ll sq= sqrt(x);
//         if((a+b)*(a+b)==x)
//         {
//             cout<<a<<" "<<b<<endl;
//         }
//         else if(sq*sq==x)
//         {
//             a= sqrt(x);
//             b=0;
//             cout<<a<<" "<<b<<endl;
//         }
//         else
//         {
//             cout<<"-1"<<endl;
//         }

//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;

//         ll z = 0, o = 0;
//         for (char c : s) 
//         {
//             if (c == '0') 
//             z++;
//             else 
//             o++;
//         }

//         ll P = n / 2;
//         ll max_good = (z / 2) + (o / 2);
//         ll min_good = ll(abs(z - o) / 2);
//         ll par= (z - P) & 1;

//         if (min_good <= k && k <= max_good && (k & 1) == par) 
//         {
//             cout << "YES\n";
//         } 
//         else 
//         {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t; 
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<int> a(n);
//         for (int& x : a) 
//         cin >> x;

//         int ans = 0, last = -1; 
//         for (int x : a) 
//         {
//             if (x > last + 1) 
//             {
//                 ans++;
//                 last = x;
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;
// const ll INF = (ll)4e18;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; 
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<pair<ll,ll>> pts(n);
//         for (int i = 0; i < n; i++) {
//             cin >> pts[i].first >> pts[i].second;
//         }
//         // এক জন মনস্টার থাকলে 1×1 আয়তক্ষেত্রই লাগে
//         if (n == 1) {
//             cout << 1 << "\n";
//             continue;
//         }

//         // x,y উভয়ের জন্য প্রথম ও দ্বিতীয় সর্বনিম্ন/সর্বোচ্চ বের করা
//         ll min1_x = INF, min2_x = INF;
//         ll max1_x = -INF, max2_x = -INF;
//         ll min1_y = INF, min2_y = INF;
//         ll max1_y = -INF, max2_y = -INF;

//         for (auto &p : pts) {
//             ll x = p.first, y = p.second;
//             // x
//             if (x < min1_x) { min2_x = min1_x; min1_x = x; }
//             else if (x < min2_x) min2_x = x;
//             if (x > max1_x) { max2_x = max1_x; max1_x = x; }
//             else if (x > max2_x) max2_x = x;
//             // y
//             if (y < min1_y) { min2_y = min1_y; min1_y = y; }
//             else if (y < min2_y) min2_y = y;
//             if (y > max1_y) { max2_y = max1_y; max1_y = y; }
//             else if (y > max2_y) max2_y = y;
//         }

//         // কোনো মুভ না করলে
//         ll W_all = max1_x - min1_x + 1;
//         ll H_all = max1_y - min1_y + 1;
//         ll ans = W_all * H_all;

//         // প্রতিটি মনস্টার বাদ দিয়ে area হিসাব
//         for (auto &p : pts) {
//             ll x = p.first, y = p.second;
//             ll mnx = (x == min1_x ? min2_x : min1_x);
//             ll mxx = (x == max1_x ? max2_x : max1_x);
//             ll mny = (y == min1_y ? min2_y : min1_y);
//             ll mxy = (y == max1_y ? max2_y : max1_y);

//             ll W = mxx - mnx + 1;
//             ll H = mxy - mny + 1;
//             ans = min(ans, W * H);
//         }

//         cout << ans << "\n";
//     }
//     return 0;
// }
