/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll c=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]%2==0&&a[i]!=0)
       {
           c=i;
           break;
       }
    }
    ll ans=0;
    for(int i=0;i<=c;i++)
    {
        ans+=a[i];
    }
    //double x=((double)ans/(double)a[c]);

    if(ans%a[c]==0)
        cout<<0<<endl;
    else if(ans%a[c]!=0)
    {
      printf("%d/%d",ans,a[c]);
    }
        //cout<<x<<endl;
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int>h(n);
        for (int i = 0; i < n;i++)
        {
            cin >>h[i];
        }

        vector<int>p(n);
        for (int i = 0; i < n;i++)
        {
            cin >>p[i];
        }

        int c= INT_MAX;

        for (int i = 0; i < n;i++)
        {
            int dis= abs(p[i]);
            c= min(c, dis);
        }

        bool pos= true;

        for (int i = 0; i < n;i++)
        {
            int dis= abs(p[i]);
            if (p[i] > 0 && dis<=c&&h[i] <= k + dis- 1)
            {
                k -= max(0, h[i] - dis+ 1);
            }
        }

        if (k < c)
            pos = false;

        if (pos)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        int c = INT_MAX;

        for (int i = 0; i < n; i++) {
            int dis = abs(p[i]);
            c = min(c, dis);
        }

        bool pos = true;

        for (int i = 0; i < n; i++)
        {
            int dis = abs(p[i]);
            if (p[i] >=0 && dis == c)
            {
                k -= max(0, h[i] - (p[i] - 1));
            }
        }

        if (k <=c)
            pos = false;

        if (pos)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), x(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        bool survived = true;
        int closest_monster_distance = INT_MAX;

        for (int i = 0; i < n; ++i) {
            // Calculate distance of each monster from the character
            closest_monster_distance = min(closest_monster_distance, abs(x[i]));
        }

        for (int i = 0; i < n; ++i) {
            // Calculate the time required for the closest monster to reach the character
            int time_to_reach = max(0, closest_monster_distance - x[i]);

            // Calculate the maximum bullets required to kill the monster before it reaches the character
            int max_bullets_required = min(k, time_to_reach);

            // If the monster's health is greater than the bullets required to kill it, it will reach the character
            if (a[i] > max_bullets_required) {
                survived = false;
                break;
            }
        }

        if (survived) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
