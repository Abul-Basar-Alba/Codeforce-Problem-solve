/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mn= min(n, 10);
        int mx= max(0, n - 10);
        cout<<mx<<" "<<mn<<endl;
    }
}*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> bags(n, vector<int>(n));
    int candies = n * n;

    // Distributing candies in bags for each brother
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bags[j][(i + j) % n] = candies--;
        }
    }

    // Outputting the bags for each brother
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << bags[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

