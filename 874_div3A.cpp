#include<bits/stdc++.h>
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
        string s;
        cin>>s;
        set<string>st;
        for(int i = 0; i < n - 1; ++i)
        {
            string melody = s.substr(i, 2);
            st.insert(melody);
        }
        cout << st.size() << endl;
    }
}
