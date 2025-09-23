#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;
const double PI = 3.14159265358979323846;

void Basar()
{
    double r, l, theta;
    cin >> r >> l >> theta;

    double rad = theta * PI / 180.0;
    
    //d=L2−(2rsin(θ/2))2
​

    double d = sqrt(l*l - pow(2 * r * sin(rad/2.0), 2));

    cout << fixed << setprecision(6) << d << "\n";
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
