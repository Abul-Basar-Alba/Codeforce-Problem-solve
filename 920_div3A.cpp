/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        ll s=max(abs(x1-x2),abs(y1-y2));
        ll area=s*s;
        cout<<area<<endl;
    }
}*/
#include <iostream>
using namespace std;

int minOperations(int n, string initial, string desired) {
    int operations = 0;

    for (int i = 0; i < n; ++i) {
        if (initial[i] != desired[i]) {
            // If the cat needs to be added
            if (desired[i] == '1' && initial[i] == '0') {
                operations++;
            }
            // If the cat needs to be removed
            else if (desired[i] == '0' && initial[i] == '1') {
                operations++;
            }
            // If the cat needs to be moved from one box to another
            else if (i + 1 < n && desired[i] == '1' && initial[i + 1] == '0') {
                operations++;
                initial[i + 1] = '1';  // Update the next box to avoid duplicate operations
            }
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string initial, desired;
        cin >> initial >> desired;

        // Calculate and print the minimum number of operations
        cout << minOperations(n, initial, desired) << endl;
    }

    return 0;
}
