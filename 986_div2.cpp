//A. Alice's Adventures in "Chess"

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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        for(int i=0;i<10;i++)
        s += s;  

        int x = 0, y = 0;  
        bool ok = false;

        for (char move : s) 
        {
           
            if (move == 'N') y++;
            else if (move == 'E') x++;
            else if (move == 'S') y--;
            else if (move == 'W') x--;

            if (x == a && y == b) 
            {
                ok = true;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
