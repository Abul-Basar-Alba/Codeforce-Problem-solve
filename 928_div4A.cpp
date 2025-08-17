/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int cntA = 0, cntB = 0;
        for (char c : s)
        {
            if (c == 'A')
                cntA++;
            else
                cntB++;
        }

        if (cntA > cntB)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            ll c = 0;
            for (int j = 0; j < s.size(); j++) // Corrected loop condition
            {
                if (s[j] == '1')
                    c++;
                mn = min(mn, c);
            }
        }
        if (mn == 1) // Corrected condition for triangle
            cout << "TRIANGLE" << endl;
        else
            cout << "SQUARE" << endl;
    }
    return 0;
}


