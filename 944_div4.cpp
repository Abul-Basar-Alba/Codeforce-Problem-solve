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
        string s;
        cin>>s;
        if(is_sorted(s.begin(),s.end()))
        {
            cout<<1<<endl;
            continue;
        }
        s.erase(unique(s.begin(),s.end()),s.end());
        ll n=s.size();
        if(n>=3)
            n--;
        cout<<n<<endl;

    }

}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Check if n is already a binary decimal
        bool binary = true;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0 && digit != 1) {
                binary = false;
                break;
            }
            n /= 10;
        }

        if (binary) {
            cout << "YES\n";
            continue;
        }

        // Check if n can be represented as a product of binary decimals
        bool possible = false;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                int factor1 = i;
                int factor2 = n / i;
                if ((factor1 % 10 == 0 || factor1 % 10 == 1) && (factor2 % 10 == 0 || factor2 % 10 == 1)) {
                    possible = true;
                    break;
                }
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
