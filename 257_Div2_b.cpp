/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
//const int MOD = 1e9 + 7;
ll mod(ll a, ll m)
{
    return ((a % m) + m) % m;
}
int main()
{
    ll x,y;
    cin>>x>>y;
    ll n;
    cin>>n;
    if(n%6==0)
        cout<<(mod(x-y,1000000007))<<endl;
    else if(n%6==1)
        cout<<(mod(x,1000000007))<<endl;
    else if(n%6==2)
        cout<<(mod(y,1000000007))<<endl;
    else if(n%6==3)
        cout<<(mod(y-x,1000000007))<<endl;
    else if(n%6==4)
        cout<<(mod(-1*x,1000000007))<<endl;
    else if(n%6==5)
        cout<<(mod(-1*y,1000000007))<<endl;
}*/
/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;
const int MOD = 1e9 + 7;
ll mod(ll a, ll m)
{
    return ((a % m) + m) % m;
}

int main()
{
    ll x, y;
    cin >> x >> y;
    ll n;
    cin >> n;

    if (n % 6 == 1)
    {
        cout << mod(x, MOD) << endl;
    }
    else if (n % 6 == 2)
    {
        cout << mod(y, MOD) << endl;
    }
    else if (n % 6 == 3)
    {
        cout << mod(y - x, MOD) << endl;
    }
    else if (n % 6 == 4)
    {
        cout << mod(-x, MOD) << endl;
    }
    else if (n % 6 == 5)
    {
        cout << mod(-y, MOD) << endl;
    }
    else
    {
        cout << mod(x - y, MOD) << endl;
    }

    return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    int lastNonEqual = -1;
    for (int i = k - 1; i < n; ++i) {
        if (sequence[i] != sequence[n - 1]) {
            lastNonEqual = i;
        }
    }

    int operations = (lastNonEqual >= k - 1) ? lastNonEqual - k + 1 : -1;
    cout << operations << endl;

    return 0;
}
