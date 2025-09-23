/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int solve(int n)
{
    ll sum = 0;
    while (n> 0)
    {
        sum += n% 10;
        n/= 10;
    }
    return sum;
}

int main()
{
   ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll sum = 0;
        for (int i = 1; i <= n;i++)
        {
            sum +=solve(i);
        }

        cout <<sum<< endl;
    }

    return 0;
}
*/
/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

bool sqr(const vector<string>& gr, int n)
{
    int tp= n, bot= -1, lef= n, r= -1;

    for (int i = 0; i < n;i++)
        {
        for (int j = 0; j < n;j++)
        {
            if (gr[i][j] == '1')
            {
                tp = min(tp, i);
                bot= max(bot, i);
                lef= min(lef, j);
                r= max(r, j);
            }
        }
    }

    int w= r- lef+ 1;
    int h= bot- tp + 1;

    return w== h&&w> 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> gr(n);
        for (int i = 0; i < n;i++)
        {
            cin >> gr[i];
        }

        bool f= sqr(gr, n);
        if (f)
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}*/
/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n][n];
         for(int i = 0; i < n; i++)
        {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        }
    vector<int>v;
    int cnt;
    int mn=0;
    for(int i = 0; i < n; i++)
    {
         cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == '1')
            {
                cnt++;
            }
        }
        if(cnt > 0)
        {
            v.push_back(cnt);
        }
        //mn=min(mn,cnt);
        //cnt=0;
    }
    mn=*min_element(v.begin(),v.end());
    if(mn==1)
    {
        cout << "TRIANGLE\n";

    }
    else
    {
       cout << "SQUARE\n";
    }

    }
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<int>v;
        int cnt;
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cnt=0;
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='1')
                    cnt++;
            }
            if(cnt>0)
                mn=min(mn,cnt);
                //v.push_back(cnt);
        }
        //int mn=*min_element(v.begin(),v.end());
        if(mn==1)
    {
        cout << "TRIANGLE\n";

    }
    else
    {
       cout << "SQUARE\n";
    }

    }
}
