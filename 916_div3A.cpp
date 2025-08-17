#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        for(auto i:s)
        {
           mp[i]++;
        }
        ll cn=0;
        for(auto it:mp)
        {
            if(it.second>=it.first-'A'+1)
                cn++;
        }
        cout<<cn<<endl;
    }
}
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        for (int i = n; i>k + 1; i--)
        {
            cout << i << ' ';
        }

        //cout << "1 ";

        for (int i = 1; i <=k+1; i++)
        {
            cout << i << ' ';
        }

        cout << endl;
    }

    return 0;
}*/

