#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            v[i] = i;
        }

        do
        {
            bool good= true;
            for (int i = 0; i < n; ++i)
            {
                int sum = v[i] + i;
                int root = sqrt(sum);
                if (root * root != sum)
                {
                    good = false;
                    break;
                }
            }

            if (good)
            {
                for (int i = 0; i < n; ++i)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
                break;
            }
        }
         while (next_permutation(v.begin(),v.end()));

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
