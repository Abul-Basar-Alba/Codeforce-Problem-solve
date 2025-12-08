#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Basar() 
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll awake = -1, gum = 0;

    for (int i = 0; i < n; i++) 
    {
        if (s[i] == '1') 
        {
            awake = max(awake, i + k);
        } 
        else 
        {
            if (i > awake) 
            gum++;
        }
    }

    cout << gum << "\n";
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    Basar();
}
