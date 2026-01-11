#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll bat1 = 1, bat2 = 2; 
        ll striker = 1;       
        ll next_bat = 3;          
        bool all_out = false;

        for (int i = 0; i < n; i++) 
        {
            char ball = s[i];

            if (ball == '1' || ball == '3') 
            {
                striker = 3 - striker;
            }
            else if (ball == 'W') 
            {
                if (next_bat > 11) 
                {
                    all_out = true;
                    break;
                }
                if (striker == 1)
                    bat1 = next_bat;
                else
                    bat2 = next_bat;

                next_bat++;
            }
            if ((i + 1) % 6 == 0) 
            {
                striker = 3 - striker;
            }
        }

        if (all_out) 
        {
            if (striker == 1)
                cout << bat2 << "\n";
            else
                cout << bat1 << "\n";
        } 
        else 
        {
            if (striker == 1)
                cout << bat1 << "\n";
            else
                cout << bat2 << "\n";
        }
    }
    return 0;
}

