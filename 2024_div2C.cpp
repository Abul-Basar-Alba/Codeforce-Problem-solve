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
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll s=0,p=0;
        s=a[0];
        ll ans=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]<=s)
                s=a[i];
            else if(a[i]>s&&p==0||a[i]>s&&p==a[i])
             p=a[i];
            else if(a[i]>s&&a[i]>p)
            {
                s=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}*/
/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll s = a[0];
        ll p = n+2;
        ll ans = 0;


        for (int i = 1; i < n; i++)
        {
            if(s>p)
            {
                swap(s,p);
            }
            if (a[i] <= s)
            {
                s = a[i];
            }
        else if (a[i] <= p)
            {
                p = a[i];
            }
        else
            {

                    s=a[i];
                    ans++;

            }
        }

        cout << ans << endl;
    }

    return 0;
}*/

// contest B
/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{

    ll n;
    cin >> n;
    string p;
    cin >> p;

    ll target_x = n / 2;
    ll target_sitting = n / 2;

    ll current_x = 0, current_sitting = 0;
    for (char c : p)
    {
        if (c == 'X') current_x++;
        else if (c == 'x') current_sitting++;
    }

    ll diff_x = target_x - current_x;
    ll diff_sitting = target_sitting - current_sitting;

    int min= 0;

    for (int i = 0; i < n; ++i)
    {
        if (diff_x > 0 && p[i] == 'x')
        {
            p[i] = 'X';
            diff_x--;
            min++;
        }
    else if (diff_sitting > 0 && p[i] == 'X')
        {
            p[i] = 'x';
            diff_sitting--;
            min++;
        }
    }

    cout << min<< endl;
    cout << p<< endl;
    return 0;

}*/
// contest D
/*#include<bits/stdc++.h>
using namespace std;
double R,D,n,x,y,r,i,c,d;
int main()
{
    cin>>R>>D>>n;
    D=R-D;
    for(i=0;i<n;i++){
        cin>>x>>y>>r;
        d=sqrt(x*x+y*y);
        if(d+r<=R && d-r>=D) c++;
    }
    cout<<c;
    return 0;
}
*/
#include <bits/stdc++.h>
#define ll ll int
using namespace std;

double p,w,n,x,y,r,i,c,d;

int main()
{
    //int p,w, n;
    cin >> p>>w >> n;
    w=p-w;
     c= 0;

    for ( i = 0; i < n; ++i)
    {
        int x, y, r;
        cin >> x >> y >> r;

        d= sqrt(x * x + y * y);

        if (d+ r <= p&& d-r>=w )
        {
            c++;
        }
    }

    cout << c<< endl;

    return 0;
}
