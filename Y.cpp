/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n + 1);
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        ll sum = arr[b] - arr[a - 1];

        cout << sum << endl;
    }

    return 0;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,q;
    cin>>n>>q;
    ll ar[n+1];
    for(ll i=0;i<n;i++)
        cin>>ar[i];
    ll pre[n+1];
    pre[0]=ar[0];

    for(ll i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+ar[i];
    }
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<(pre[r]-pre[l-1])<<endl;
    }
}

