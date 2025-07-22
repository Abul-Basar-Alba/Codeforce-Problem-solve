/*#include<bits/stdc++.h>
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
        int cn=0;
        int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0,x4=0,y4=0;
        for(ll i=1;i<=n;i++)
        {
            int x,y;
            cin>>x>>y;
            if((x>=0&&y>=0)||(abs(x1)>abs(x)&&abs(y1)<abs(y))||(abs(x1)<abs(x)&&abs(y1)>abs(y)))
            {
                 x1=x;
                 y1=y;
                cn++;
            }
            if((x>=0&&y<0)||(abs(x2)>abs(x)&&abs(y2)<abs(y))||(abs(x2)<abs(x)&&abs(y2)>abs(y)))
            {
                 x2=x;
                 y2=y;
                cn++;
            }
            if((x<0&&y>=0)||(abs(x3)>abs(x)&&abs(y3)<abs(y))||(abs(x3)<abs(x)&&abs(y3)>abs(y)))
            {
                 x3=x;
                 y3=y;
                cn++;
            }
            if((x<0&&y<0)||(abs(x4)>abs(x)&&abs(y4)<abs(y))||(abs(x4)<abs(x)&&abs(y4)>abs(y)))
            {
                 x4=x;
                 y4=y;
                cn++;
            }
        }
        if(cn<=3)
        {
            cout<<"Yes\n";
        }
        else
            cout<<"NO\n";
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        set<int> x_coords, y_coords;

        for (ll i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            x_coords.insert(x);
            y_coords.insert(y);
        }

        if ((x_coords.size() <= 2 && y_coords.size() <= 2) || (x_coords.size() == 1 && y_coords.size() == 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

