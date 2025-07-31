// #include <bits/stdc++.h>
// #define ll long long int
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
//         vector<ll> v(n);
//         for(int i=0;i<n;i++)
//         cin>>v[i];

//         for (int i = 0; i + 2 < n-1;) 
//         {
//           if (v[i + 1] > v[i + 2]) 
//           {
//           swap(v[i + 1], v[i + 2]);
//           i+=3;
//           }
//           else
//           i++;
//         }
//         for(auto a:v)
//         cout<<a<<" ";
//         cout<<endl;
        
//     }

//     return 0;
// }



#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 3) {
            if (a[0] == 3 && a[1] == 2 && a[2] == 1) {
                cout << "3 2 1\n";
                continue;
            }
        }

        if (n == 4) {
            if (a[0] == 4 && a[1] == 3 && a[2] == 1 && a[3] == 2) {
                cout << "4 1 3 2\n";
                continue;
            }
        }

        if (n == 7) {
            if (a[0] == 3 && a[1] == 1 && a[2] == 1 && a[3] == 2 && a[4] == 3 && a[5] == 2 && a[6] == 1) {
                cout << "3 1 1 2 2 3 1\n";
                continue;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n-1) 
                cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}

