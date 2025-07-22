// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin >> n;

//         if(n<15)
//         {
//             ll cn=0;
//             for(ll i=0;i<=n;i++)
//             {
//                 if(i%3==i%5)
//                 {
//                     cn++;
//                 }
//             }
//             cout<<cn<<endl;
//             continue;
//         }
        
//         if(n%15==0)
//         {
//             ll res=n/15;
//             cout<<(res*3)+1<<endl;
//         }
//         else if(n%15==1)
//         {
//             ll res=(n/15);
//             cout<<(res*3)+2<<endl;
//         }
//         else if(n%15==2)
//         {
//             ll res=(n/15);
//             cout<<(res*3)+3<<endl;
//         }
//         else{
//             ll res=(n/15)+1;
//             cout<<(res*3)<<endl;
//         }
        

//     }
// }


#include <bits/stdc++.h>
using namespace std;
using int64 = ll;

int64 move(char ch) 
{
    return ch == 'R' ? 1 : -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        int64 x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        
        int64 pos = 0;
        int64 c = 1e18 + 1; 
        for (int j = 0; j < n; j++) {
            pos += move(s[j]);
            if (pos == 0) {
                c = j + 1;
                break;
            }
        }

        
        pos = x;
        int i = 0;           
        int64 time = 0;      
        int64 count = 0;     
        while (time < k) {
            if (i == n && pos != 0) 
            {
                break; 
            }
            int64 next_pos = pos + move(s[i]);
            time++;
            if (next_pos == 0) {
                count++;
                pos = 0;
                i = 0;
                
                if (c <= 1e18) {
                    int64 remaining_time = k - time;
                    int64 num_cycles = remaining_time / c;
                    count += num_cycles;
                    time += num_cycles * c;
                }
            } else {
                pos = next_pos;
                i++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}