
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int z= 0, on= 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
        }

        if (z!=0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll tc;
    cin >> tc;

    while (tc--) {
        ll n, P, l, t;
        cin >> n >> P >> l >> t;

        ll restDays = 0;
        int totalTasks = 0, totalPoints = 0;

        for (ll day = 1; day <= n; day++) {
            // Attend lesson
            totalPoints += l;

            // Calculate unlocked tasks based on day and complete tasks if possible
            ll unlockedTasks = (day - 1) / 7;
            int tasksLeft = unlockedTasks - totalTasks;

            if (tasksLeft > 0 && tasksLeft <= 2) {
                int taskPoints = min((2), tasksLeft) * t;
                totalTasks += min((2), tasksLeft);
                totalPoints += taskPoints;
            }

            // Check if Monocarp has earned enough points and calculate rest days
            if (totalPoints >= P) {
                restDays = n - day;
                break;
            }
        }

        cout << restDays << endl;
    }

    return 0;
}

