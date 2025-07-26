/*#include<bits/stdc++.h>
using namespace std;

string ss;

// Function to convert a number to a string
void num_to_str(int num)
{
    if(num)
    {
        num_to_str((num - 1) / 26);
        ss += ('a' + (num - 1) % 26); // Convert remainder to character ('a' to 'z')
    }
}

int main()
{
    int t;
    cin >> t; // Input number of test cases

    // Iterate through each test case
    while (t--)
    {
        int n;
        cin >> n; // Input length of the word
        string s;
        cin >> s; // Input the word itself
        string ans;
        int i = 1;

        // Iterate until MEX is found
        while (true)
        {
            ss = ""; // Reset ss for each iteration
            num_to_str(i); // Generate string from current value of i

            // Check if generated string is a substring of input string s
            int pos = s.find(ss);
            if (pos == -1)
            {
                ans = ss; // If not found, this is the MEX
                break; // Exit the loop
            }
            i++; // Move to the next number to generate the next string
        }
        // Output the MEX of the word
        cout << ans << endl;
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        int i = 1;
        while(1) {
            string ss = "";
            int temp = i;
            while (temp > 0) {
                char c = 'a' + (temp - 1) % 26;
                ss = c + ss;
                temp = (temp - 1) / 26;
            }

            if (s.find(ss) == string::npos) {
                ans = ss;
                break;
            }
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}
