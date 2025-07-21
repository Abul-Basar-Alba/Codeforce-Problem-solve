#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n, -1);

        bool ok = true;
        // সম্পূর্ণ পজিশনগুলো এখনও -1
        for (int i = n - 1; i >= 0; --i) {
            if (p[i] != -1) continue;  // আগেই ফিল হয়ে গেছে

            // খুঁজে নাও এমন k যাতে k*k - i >= 0
            int k = ceil(sqrt(i));
            int s = k * k;
            int j = s - i;
            // যদি অবৈধ হয়ে যায়
            if (j < 0 || j > i) {
                ok = false;
                break;
            }
            // j…i ভরাও
            for (int x = j; x <= i; ++x) {
                p[x] = s - x;
            }
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            for (int x : p) {
                cout << x << ' ';
            }
            cout << "\n";
        }
    }
    return 0;
}


/*#include<bits/stdc++.h>
#define ll long long int
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
