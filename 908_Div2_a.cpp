/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[n-1]=='A')
            cout<<"A\n";
        else if(s[n-1]=='B')
            cout<<"B\n";
    }
}*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count_A = 0; // Count of plays won by A
        int count_B = 0; // Count of plays won by B
        int wins_A = 0; // Count of sets won by A
        int wins_B = 0; // Count of sets won by B

        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                count_A++;
            } else {
                count_B++;
            }

            // Check if one of the players has reached X wins in a set
            if (count_A >= 7 || count_B >= 7) {
                // Determine the winner of the set
                if (count_A > count_B) {
                    wins_A++;
                } else {
                    wins_B++;
                }

                // Reset the counts for the next set
                count_A = 0;
                count_B = 0;
            }

            // Check if one of the players has reached Y wins in the sets
            if (wins_A == 2 || wins_B == 2) {
                if (wins_A > wins_B) {
                    cout << "A\n";
                } else {
                    cout << "B\n";
                }
                break;
            }
        }

        // If neither player has reached Y wins in the sets, it's impossible to determine the winner
        if (wins_A != 2 && wins_B != 2) {
            cout << "?\n";
        }
    }

    return 0;
}
