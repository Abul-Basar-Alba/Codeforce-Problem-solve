#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        ll h,m;
        char c;
        cin >>h>>c>>m;
        if(h>=12)
        {
            if(h>12)
                h-=12;
            if(h<10)
            cout<<0;
            cout<<h<<c;
            if(m<10)
                cout<<0;
            cout<<m<<' '<<"PM\n";
        }
        else
        {
          if(h==0)
                h=12;
            if(h<10)
            cout<<0;
            cout<<h<<c;
            if(m<10)
                cout<<0;
            cout<<m<<' '<<"AM\n";
        }
    }
}
