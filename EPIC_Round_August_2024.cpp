//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//     ll n,m,k;
//     cin>>n>>m>>k;
//     if(n<=k&&m<=k)
//     {
//         cout<<n*m<<endl;
//
//     }
//     else
//     {
//         if(n>k)
//         {
//             n=k;
//         }
//         if(m>k)
//         {
//             m=k;
//         }
//         cout<<n*m<<endl;
//     }
//    }
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // Two-pointer approach
        int left_a = 0, right_a = n - 1;
        int left_b = 0, right_b = n - 1;

        bool ok = false;

        while (left_a <= right_a && left_b <= right_b)
        {
            if (a[left_a] == b[left_b] && a[right_a] == b[right_b])
            {
               left_a++;
               left_b++;
            }
            else if(a[left_a] == b[right_b] && a[right_a] == b[left_b] )
            {
                left_a++;
                right_b--;
            }
            else
            {
                ok=true;
                break;
            }
        }

        if (!ok)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
        }
    }

    return 0;
}
