/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    multiset<int>mini;
    multiset<int,greater<int>>maxi;
    for(ll i=0;i<m;i++)
    {
        int x;
        cin>>x;
        mini.insert(x);
        maxi.insert(x);
    }
    ll max=0;
    for(ll i=0;i<n;i++)
    {
        ll k=*maxi.begin();
        max+=k;
        maxi.erase(maxi.lower_bound(k));
        k--;
        if(k>0)
            maxi.insert(k);
    }
    ll min=0;
    for(ll i=0;i<n;i++)
    {
        ll k=*mini.begin();
        min+=k;
        mini.erase(mini.lower_bound(k));
        k--;
        if(k>0)
            mini.insert(k);
    }
    cout<<max<<" "<<min<<endl;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max_earnings = 0;
    int min_earnings = 0;

    for (int i = 0; i < n; i++) {
        max_earnings += a.back();
        a.back()--;
        if (a.back() == 0) {
            a.pop_back();
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; n > 0; i++) {
        min_earnings += a[i];
        n = max(0, n - 1);
        a[i]--;
        if (a[i] == 0) {
            i++;
        }
    }

    cout << max_earnings << " " << min_earnings << endl;

    return 0;
}
