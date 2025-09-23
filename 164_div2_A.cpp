/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    int y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    int cn=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(x[i]==y[j])
                cn++;
        }
    }
    cout<<cn<<endl;
}*/

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll x=(n+m-1)/(m);//ceil value
        x=n-x;
        if(m==1)
            cout<<"NO\n";
        else
        {
        if(k>=(x))
            cout<<"NO\n";
        else
            cout<<"YES\n";
        }
    }

}*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, q;
        cin >> k >> q;

        vector<int> a(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }

        for (int j = 0; j < q; ++j) {
            int n;
            cin >> n;

            vector<int> players(n, 1); // Initialize all players to 1 (in the game)
            bool all_removed = false;

            int idx = 0; // Index for sequence a

            while (!all_removed) {
                all_removed = true;
                for (int i = 0; i < a.size(); ++i) {
                    int target = a[i];
                    if (target <= players.size()) {
                        players[target - 1] = 0; // Remove player at index target - 1
                        all_removed = false;
                    }
                }
                // Remove kicked out players from the vector
                players.erase(remove(players.begin(), players.end(), 0), players.end());
            }

            cout << players.size() << " ";
        }
        cout << endl;
    }

    return 0;
}
