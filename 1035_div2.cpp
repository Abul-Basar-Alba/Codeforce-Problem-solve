#include <bits/stdc++.h>
#define ll ll
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b) 
        {

            cout << 0 << '\n';
            continue;
        }

        if (a > b) 
        {
            if ((a ^ 1) == b)
                cout << y << '\n';
            else
                cout << -1 << '\n';
            continue;
        }

        ll cost = 0;
        while (a < b) 
        {
           
            if ((a ^ 1) > a && (a ^ 1) <= b && y < x) 
            {
                a = a ^ 1;
                cost += y;
            } 
            else 
            {
                a = a + 1;
                cost += x;
            }
        }

        if (a == b)
            cout << cost << '\n';
        else if ((a ^ 1) == b)
            cout << cost + y << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t; 
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin >> n;

//         ll px, py, qx, qy;
//         cin >> px >> py >> qx >> qy;

//         vector<ll> a(n);
//         ll sum = 0, mx = 0;
//         for(int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             sum += a[i];
//             mx = max(mx, a[i]);
//         }

//         ll dx = px - qx;
//         ll dy = py - qy;
//         ll d2 = dx*dx + dy*dy;

//         ll Lmin = max(0LL, 2*mx - sum);
//         ll Lmin2 = Lmin * Lmin;

//         ll S2 = sum * sum;

//         if (d2 >= Lmin2 && d2 <= S2) 
//         {
//             cout << "Yes\n";
//         } 
//         else 
//         {
//             cout << "No\n";
//         }
//     }

//     return 0;
// }


