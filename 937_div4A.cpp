/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c)
            cout << "STAIR" << endl;
        else if (a < b && b > c)
            cout << "PEAK" << endl;
        else
            cout << "NONE" << endl;
    }
}
*/
#include<bits/stdc++.h>
#define ll ll int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
       for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "##";
            }
            else {
                cout << "..";
            }
        }
        cout << nl;
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "##";
            }
            else {
                cout << "..";
            }
        }
        cout << nl;
    }
    }
}
