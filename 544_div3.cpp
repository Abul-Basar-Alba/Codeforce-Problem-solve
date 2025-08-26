#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll h1, h2, m1, m2;
    char c1, c2;
    cin >> h1 >> c1 >> m1;
    cin >> h2 >> c2 >> m2;

    // Convert both times to minutes from the start of the day
    ll total_minutes_1 = h1 * 60 + m1;
    ll total_minutes_2 = h2 * 60 + m2;

    // Calculate the average of the two times
    ll midpoint_minutes = (total_minutes_1 + total_minutes_2) / 2;

    // Convert the average back to hours and minutes
    ll res = midpoint_minutes / 60;
    ll rem = midpoint_minutes % 60;

    // Print the result in HH:MM format
    if (res < 10) cout << '0';
    cout << res << ':';
    if (rem < 10) cout << '0';
    cout << rem << '\n';

    return 0;
}
