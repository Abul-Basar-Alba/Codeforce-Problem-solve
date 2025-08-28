
//A - aaaadaa

// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     char c1,c2;
//     cin>>n>>c1>>c2;
//     string s;
//     cin>>s;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]!=c1)
//         {
//             s[i]=c2;
//         }
//     }
//     cout<<s<<endl;
// }

//B - ARC Division

// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll n, sum;
//     cin >> n >> sum; 
    
//     while (n--) 
//     {
//         ll c, r;
//         cin >> c >> r; 
        
//         if (c == 1) 
//         {
            
//             if (sum >= 1600 && sum <= 2799) 
//             {
//                 sum += r;
//             }
//         } 
//         else if (c == 2) 
//         {
           
//             if (sum >= 1200 && sum <= 2399) 
//             {
//                 sum += r;
//             }
//         }
//     }
    
//     cout << sum << endl; 
//     return 0;
// }

//C - Perfect Standings

// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll a, b, c, d, e;
//     cin >> a >> b >> c >> d >> e;

//     vector<pair<ll, string>> p;

//     ll ABCDE = a + b + c + d + e;
//     p.push_back({ABCDE, "ABCDE"});

//     ll BCDE = b + c + d + e;
//     p.push_back({BCDE, "BCDE"});

//     ll ACDE = a + c + d + e;
//     p.push_back({ACDE, "ACDE"});

//     ll ABDE = a + b + d + e;
//     p.push_back({ABDE, "ABDE"});

//     ll ABCE = a + b + c + e;
//     p.push_back({ABCE, "ABCE"});

//     ll ABCD = a + b + c + d;
//     p.push_back({ABCD, "ABCD"});

//     ll CDE = c + d + e;
//     p.push_back({CDE, "CDE"});

//     ll BDE = b + d + e;
//     p.push_back({BDE, "BDE"});

//     ll ADE = a + d + e;
//     p.push_back({ADE, "ADE"});

//     ll BCE = b + c + e;
//     p.push_back({BCE, "BCE"});

//     ll ACE = a + c + e;
//     p.push_back({ACE, "ACE"});

//     ll BCD = b + c + d;
//     p.push_back({BCD, "BCD"});

//     ll ABE = a + b + e;
//     p.push_back({ABE, "ABE"});

//     ll ACD = a + c + d;
//     p.push_back({ACD, "ACD"});

//     ll ABD = a + b + d;
//     p.push_back({ABD, "ABD"});

//     ll ABC = a + b + c;
//     p.push_back({ABC, "ABC"});

//     ll DE = d + e;
//     p.push_back({DE, "DE"});

//     ll CE = c + e;
//     p.push_back({CE, "CE"});

//     ll BE = b + e;
//     p.push_back({BE, "BE"});

//     ll CD = c + d;
//     p.push_back({CD, "CD"});

//     ll AE = a + e;
//     p.push_back({AE, "AE"});

//     ll BD = b + d;
//     p.push_back({BD, "BD"});

//     ll AD = a + d;
//     p.push_back({AD, "AD"});

//     ll BC = b + c;
//     p.push_back({BC, "BC"});

//     ll AC = a + c;
//     p.push_back({AC, "AC"});

//     ll AB = a + b;
//     p.push_back({AB, "AB"});
    
//     p.push_back({a, "A"});
//     p.push_back({b, "B"});
//     p.push_back({c, "C"});
//     p.push_back({d, "D"});
//     p.push_back({e, "E"});

//     sort(p.begin(), p.end(), [](pair<ll, string> &a, pair<ll, string> &b) {
//         if (a.first == b.first) 
//             return a.second < b.second; 
//         return a.first > b.first; 
//     });

//     for (auto &it : p) {
//         cout << it.second << "\n";
//     }

//     return 0;
// }


//C - Perfect Standings

// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
    
//     ll a, b, c, d, e;
//     cin >> a >> b >> c >> d >> e;
  
//     vector<pair<ll, string>> p;
//     vector<char> prob = {'A', 'B', 'C', 'D', 'E'};
//     vector<ll> score = {a, b, c, d, e};
    
//     for (int i = 1; i < (1 << 5); ++i) 
//     {
//         ll total = 0;
//         string name = "";
//         for (int j = 0; j < 5; ++j) 
//         {
//             if (i & (1 << j)) {
//                 total += score[j];
//                 name += prob[j];
//             }
//         }
//         p.push_back({total, name});
//     }
    

//     sort(p.begin(), p.end(), [](pair<ll, string> &a, pair<ll, string> &b) {
//         if (a.first == b.first) 
//             return a.second < b.second; 
//         return a.first > b.first; 
//     });
    
  
//     for (auto &c : p) {
//         cout << c.second << endl;
//     }

//     return 0;
// }




