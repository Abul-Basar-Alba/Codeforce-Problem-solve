#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; 
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        int n = s.size();

        for (int i = 1; i < n; i++) 
        {
            string prefix = s.substr(0, i);
            string suffix = s.substr(i);

            if (suffix[0] == '0') 
                continue;
            bool allDigits = true;
            for (char c : suffix) 
            {
                if (!isdigit(c)) 
                {
                    allDigits = false;
                    break;
                }
            }
            if (!allDigits) 
                continue;

            bool hasLetter = false;
            for (char c : prefix) 
            {
                if (c >= 'a' && c <= 'z') 
                {
                    hasLetter = true;
                    break;
                }
            }
            if (!hasLetter) 
                continue;

            cout << prefix << "\n";
            break;
        }
    }
    return 0;
}
