#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        string res = "";
        bool f = false;

        for (int i = 0; i < n - 1; i++)
        {
            res += s[i];
            if (s[i] == s[i + 1])
            {
                for (char c = 'a'; c <= 'z'; c++)
                {
                    if (c != s[i])
                    {
                        res += c;
                        break;
                    }
                }
                f = true;
                res += s.substr(i + 1);
                break;
            }
        }

        if (!f)
        {
            res="";
            for (char c = 'a'; c <= 'z'; c++)
                {
                    if (c != s[n-1])
                    {
                        res += s+c;
                        break;
                    }
                }
            //res = s + 'a';
        }

        cout << res << endl;
    }
    return 0;
}

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--) {
//        string s;
//        cin >> s;
//        ll n = s.size();
//        string bestString;
//        int maxTime = 0;
//
//        // Loop through each position to insert a character
//        for (ll i = 0; i <= n; i++) {
//            // Loop through each lowercase letter
//            for (char c = 'a'; c <= 'z'; c++) {
//                string temp = s.substr(0, i) + c + s.substr(i);
//
//                // Calculate the typing time for the new string
//                int time = 2;  // Time for the first character
//                for (ll j = 1; j < temp.size(); j++) {
//                    if (temp[j] == temp[j - 1]) {
//                        time += 1;  // Same as previous character
//                    } else {
//                        time += 2;  // Different from previous character
//                    }
//                }
//
//                // Update the best string if this one is better
//                if (time > maxTime) {
//                    maxTime = time;
//                    bestString = temp;
//                }
//            }
//        }
//
//        cout << bestString << endl;
//    }
//    return 0;
//}
