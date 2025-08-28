/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0;
    if(n<=9)
    {
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
    else
    {
        ll rem=n-(n%9);
        ll sum1=0;
        for(int i=1;i<=n%9;i++)
        {
            sum1+=i;
        }
        rem/=9;
        sum=sum1+(rem*45);
        cout<<sum<<endl;

    }

    }
    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n < 10)
        return n * (n + 1) / 2;

    int d = log10(n);

    int *a = new int[d + 1];
    a[0] = 0, a[1] = 45;
    for (int i = 2; i <= d; i++)
        a[i] = a[i - 1] * 10 + 45 * ceil(pow(10, i - 1));

    int p = ceil(pow(10, d));

    int msd = n / p;

    return msd * a[d] + (msd * (msd - 1) / 2) * p +
           msd * (1 + n % p) + solve(n % p);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
*/
/*#include<bits/stdc++.h>
using namespace std;

int sum(int n, int a[])
{
    if (n < 10)
        return (n * (n + 1) / 2);

    int d = (int)(log10(n));
    int p = (int)(ceil(pow(10, d)));
    int msd = n / p;

    return (msd * a[d] + (msd * (msd - 1) / 2) * p +
            msd * (1 + n % p) + sum(n % p, a));
}

int solve(int n)
{
    int d = (int)(log10(n));
    int a[d + 1];
    a[0] = 0; a[1] = 45;

    for(int i = 2; i <= d; i++)
        a[i] = a[i - 1] * 10 + 45 *
               (int)(ceil(pow(10, i - 1)));

    return sum(n, a);
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
*/
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N = 200000;
    vector<int> x(N+1, 0);
    for (int i = 1; i <= N; ++i)
    {
        int ds = 0;
        int y = i;
        while (y)
        {
            ds += y % 10;
            y /= 10;
        }
        x[i] = x[i-1] + ds;
    }

    int queries;
    cin >> queries;
    for (int q = 0; q < queries; ++q) {
        int n;
        cin >> n;
        cout << x[n] << endl;
    }

    return 0;
}*/
#include <bits/stdc++.h>
#define ll ll int
using namespace std;

const int N = 200005;
int a[N];
ll ans[N];

ll solve(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += solve(i);
        ans[i] = sum;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }

    return 0;
}
