#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    vector<string> s;

    while (t--) 
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if ((a == 6 && b == 1 && c == 1) || (a == 6 && b == 0 && c == 3) ||
            (a == 6 && b == 3 && c == 0) || (a == 3 && b == 3 && c == 3) ||
            (a == 1 && b == 1 && c == 6) || (a == 0 && b == 3 && c == 6) ||
            (a == 3 && b == 0 && c == 6) || (a == 1 && b == 6 && c == 1) ||
            (a == 0 && b == 6 && c == 3) || (a == 3 && b == 6 && c == 0) ||
            (a == 0 && b == 4 && c == 4) || (a == 4 && b == 0 && c == 4) ||
            (a == 4 && b == 4 && c == 0) || (a == 1 && b == 2 && c == 4) ||
            (a == 1 && b == 4 && c == 2) || (a == 2 && b == 1 && c == 4) ||
            (a == 4 && b == 1 && c == 2) || (a == 4 && b == 2 && c == 1) ||
            (a == 2 && b == 4 && c == 1) || (a == 2 && b == 2 && c == 2) ||
            (a == 3 && b == 1 && c == 4) || (a == 3 && b == 4 && c == 1) ||
            (a == 1 && b == 3 && c == 4) || (a == 4 && b == 3 && c == 1) ||
            (a == 1 && b == 4 && c == 3) || (a == 4 && b == 1 && c == 3)) 
        {
            s.push_back("perfectus");
        } 
        else 
        {
            s.push_back("invalidum");
        }
    }

    for (int i = 0; i < s.size(); i++) 
    {  
        cout << "Case " << i + 1 << ": " << s[i] << "\n";
    }

    return 0;
}
