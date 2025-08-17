#include <bits/stdc++.h>
using namespace std;
#define ll ll int

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin>>n;
        string s;
        cin >> s;
        bool ok=true;
        ll cn=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'&&ok==true)
            {
                ok=false;
                cn++;
            }
            else if(s[i]=='0'&&ok==false)
            {
                cn++;
                ok=true;
            }
        }
        cout<<cn<<endl;
    }
}
