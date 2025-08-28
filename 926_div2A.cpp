#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int mx= 0;
        for (int i = 1; i < n; ++i)
        {
            mx+= (a[i] - a[i - 1]);
        }

        cout <<mx<< endl;
    }

    return 0;
}

