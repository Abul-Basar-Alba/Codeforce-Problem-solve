/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    ll a[t];
    for(ll i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int cn=1;
    if(t==1)
        cout<<0<<endl;
    else if(t==2)
        cout<<1<<endl;
    else
    {
        min=a[0];
        max=a[1];
        if(min>max)
            swap(max,min);
        for(int i=2;i<t;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                cn++;
            }
            else if(a[i]<min)
            {
                min=a[i];
                cn++;
            }
        }
        cout<<cn<<endl;
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll t;
    cin >> t;
    ll a[t];
    for (ll i = 0; i < t; i++) {
        cin >> a[i];
    }
    int cn = 0;

    if (t == 1 || t==2&&a[0]==a[1]) {
        cout << 0 << endl;
    } else if (t==2&&a[0]!=a[1]) {
        cout << 1 << endl;
    }
    else
    {
        if(a[0]==a[1])
            cn=0;
        else
            cn=1;
        ll minimum = min(a[0], a[1]);
        ll maximum = max(a[0], a[1]);

        for (int i = 2; i < t; i++) {
            if (a[i] > maximum || a[i] < minimum) {
                maximum = max(maximum, a[i]);
                minimum = min(minimum, a[i]);
                cn++;
            }
        }
        cout << cn << endl;
    }

    return 0;
}

