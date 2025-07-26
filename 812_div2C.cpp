#include <bits/stdc++.h>
using namespace std;
using ll = ll;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> p(n, -1);

        bool ok = true;
       
        for (int i = n - 1; i >= 0; --i) 
        {
            if (p[i] != -1) 
            continue;  

            ll k = ceil(sqrt(i));
            ll s = k * k;
            ll j = s - i;
           
            if (j < 0 || j > i) 
            {
                ok = false;
                break;
            }

            for (int x = j; x <= i; ++x) 
            {
                p[x] = s - x;
            }
        }

        if (!ok)
        {
            cout << -1 << "\n";
        } 
        else 
        {
            for (int x : p) 
            {
                cout << x << ' ';
            }
            cout << "\n";
        }
    }
    return 0;
}


/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=i;
        }
        while(next_permutation(v.begin(),v.end()))
        {
            ll c=0;
            for(int i=0;i<n;i++)
            {
                ll root=v[i]+i;
                ll sq=sqrt(root);
                if(sq*sq==root)
                {
                    c++;
                }
                else
                    break;
            }
            if(c==n)
            {
                for(int i=0;i<n;i++)
                cout<<v[i]<<' ';
            }
        }
        cout<<endl;
    }
}
*/
