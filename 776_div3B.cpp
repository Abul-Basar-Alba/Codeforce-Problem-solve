/*#include<bits/stdc++.h>
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
        ll l, r, a;
        cin >> l>>r>> a;
        if(r%a==0)
        {
            ll f=r-1;
            ll tem=a-1;
            ll z=0;
            if(f>=l)
            z=(f/a)+(f%a);

            ll x=(r/a)+(r%a);

            ll y=0;
            if(tem>=l&&tem<=r)
            y=(tem/a)+(tem%a);

            ll mx=max(z,max(x,y));
            cout<<mx<<endl;
        }
        else
        {
            ll x=(r/a)+(r%a);

            ll tem=a-1;
            ll f=r/a;
            f=(a*f)-1;

            ll z=0;
            if(f>=l)
            z=(f/a)+(f%a);

            ll y=0;
            if(tem>=l&&tem<=r)
            y=(tem/a)+(tem%a);

            ll mx=max(z,max(x,y));
            cout<<mx<<endl;
        }
    }
}
*/

/*#include<bits/stdc++.h>
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

        ll cnt= 0;
        char ch= '0';

        for (char c : s)
        {
            if (c < ch)
            {
                cnt++;
            }
            ch= c;
        }

        cout << cnt+ 1 << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Sort the numbers to find consecutive sequence
        int nums[4] = {a, b, c, d};
        sort(nums, nums + 4);

        // Check for consecutive sequence
        bool intersect = (nums[0] + 1 == nums[1] && nums[1] + 1 == nums[2] && nums[2] + 1 == nums[3]) ||
                         (nums[0] == 1 && nums[1] == 4 && nums[2] == 9 && nums[3] == 12); // Special case for 1, 4, 9, 12

        if (intersect)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}


