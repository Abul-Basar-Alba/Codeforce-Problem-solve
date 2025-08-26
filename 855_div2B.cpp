// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//     ll n,k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     vector<int> cu(26, 0);
//     vector<int> cl(26, 0);
//     for (char ch : s)
//     {
//         if (ch >= 'A' && ch <= 'Z')
//         {
//             cu[ch - 'A']++;
//         }
//         else if (ch >= 'a' && ch <= 'z')
//         {
//             cl[ch - 'a']++;
//         }
//    }
//    ll res=0;
//    for(int i=0;i<26;i++)
//    {
//      res+=(min(cu[i],cl[i]));
//      ll dif=abs(cu[i]-cl[i]);

//      ll x=min(k,dif/2);
//      res+=x;
//      k-=x;
//     }
//      cout<<res<<endl;
//    }
// }


// #include<bits/stdc++.h>

// using namespace std;

// int patternMatching(const string &T, const string &P) 
// {
//     int S = T.length();
//     int R = P.length();
//     int INDEX = 0;  
    
//     int K = 0;
//     int MAX = S - R + 1;
    
//     while (K < MAX) {
//         int L = 0;
//         while (L < R && P[L] == T[K + L]) {
//             L++;
//         }
        
//         if (L == R) {  
//             INDEX = K + 1;  
//             return INDEX;
//         }
        
//         K++;
//     }
    
//     return 0;  
// }

// int main() {
//     string T = "hello world";
//     string P = "world";
    
//     int index = patternMatching(T, P);
//     if (index != 0) {
//         cout << "Pattern found at index: " << index << endl;
//     } else {
//         cout << "Pattern not found." << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    string s = "abrakadabrabrakadabra";
    int n = s.size();
    
    int overlap = 0;
    
    for (int i = 1; i < n; i++) {
        bool isOverlap = true;
        for (int j = 0; j < n - i; j++) {
            if (s[i + j] != s[j]) {
                isOverlap = false;
                break;
            }
        }
        if (isOverlap) {
            overlap = n - i;
            break;
        }
    }
    
    for (int i = overlap; i < n; i++) {
        s += s[i];
    }
    
    cout << s.substr(0,  (n - overlap+1)) << endl;
    
    return 0;
}


