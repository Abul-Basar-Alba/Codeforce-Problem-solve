#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c ,d;
        cin>>a>>b>>c>>d;
        if((a<b&&c<d)||(c<d&&c<b)||(a<b&&a<d))
        cout<<"Flower\n";
        else
        cout<<"Gellyfish\n";
    }
}
