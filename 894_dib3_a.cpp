#include<bits/stdc++.h>
#define ll ll int
#define V vector<ll>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
         vector<string> carpet(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> carpet[i];
        }
        string vika = "vika";
        int fnd = 0;
        for (int i = 0; i < m; i++)
        {
              int c=0;
            for (int j = 0; j < n; j++)
            {
                if (carpet[j][i] == vika[fnd])
                {
                    c=1;
                }
            }
            if (c==1)
            {
                fnd++;
                if (fnd == 4)
                {
                    break;
                }
            }
        }
        if (fnd == 4)
        {
            cout << "YES\n";
        } else
        {
            cout << "NO\n";
        }

    }
}
