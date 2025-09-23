/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m==1)
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
               string s;
               cin>>s;
               cout<<s<<endl;
            }
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            int c=0,w=0,r=0;
            for(int i=0;i<m-1;i++)
            {
                if(s[i]=='R'&&s[i+1]=='R'||s[i]=='W'&&s[i+1]=='W'||s[i]=='R'&&s[i+2]=='W'||s[i]=='W'&&s[i+2]=='R'||s[i]=='R'&&s[i+3]=='R'||s[i]=='W'&&s[i+3]=='W')
                    {
                        c=1;
                        continue;
                    }
                else if(s[i]=='.'&&s[i+1]=='R'||s[i]=='W'&&s[i+1]=='R'||s[i]=='W'&&s[i+1]=='.'||s[i]=='.'&&s[i+1]=='.')
                {
                   w=1;
                   continue;
                }
                else if(s[i]=='.'&&s[i+1]=='W'||s[i]=='R'&&s[i+1]=='W'||s[i]=='R'&&s[i+1]=='.'||s[i]=='.'&&s[i+1]=='.')
                {
                    r=1;
                    continue;
                }
                if(c==1)
                    cout<<"NO\n";
                else if(w==1)
                {
                    string a="";
                    for(int i=0;i<m;i+=2)
                    {
                        if(m%2!=0)
                        {
                        if(i==m-1)
                          a.push_back('W');
                        else{
                        a.push_back('W');
                        a.push_back('R');
                        }
                        }
                        else
                        {
                          a.push_back('W');
                          a.push_back('R');
                        }
                    }
                    cout<<"YES\n";
                    cout<<a<<endl;
                }
                else if(r==1)
                {
                    string a="";
                    for(int i=0;i<m;i+=2)
                    {
                        if(m%2!=0)
                        {
                        if(i==m-1)
                          a.push_back('R');
                        else{
                        a.push_back('R');
                        a.push_back('W');
                        }
                        }
                        else
                        {
                          a.push_back('R');
                          a.push_back('W');
                        }
                    }
                    cout<<"YES\n";
                    cout<<a<<endl;
                }

            }
        }
        }
    }
}*/
#include <bits/stdc++.h>
using namespace std;

typedef ll ll;

bool first(vector<string>a)
{
    ll n = a.size();
    ll m = a[0].length();
    ll i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] != '.')
            {
                if ((i + j) % 2 == 0 && a[i][j] != 'R')
                    return false;
                else if ((i + j) % 2 == 1 && a[i][j] != 'W')
                    return false;
            }
        }
    }
    return true;
}

bool second(vector<string>a)
{
    ll n = a.size();
    ll m = a[0].length();
    ll i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] != '.')
            {
                if ((i + j) % 2 == 0 && a[i][j] != 'W')
                    return false;
                else if ((i + j) % 2 == 1 && a[i][j] != 'R')
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (i = 0; i < n; i++)
            cin >> a[i];
        if (first(a))
        {
            cout << "YES" << endl;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2 == 0)
                        cout << 'R';
                    else
                        cout << 'W';
                }
                cout << endl;
            }
        }
    else if (second(a))
        {
            cout << "YES" << endl;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2 == 0)
                        cout << 'W';
                    else
                        cout << 'R';
                }
                cout << endl;
            }
        }
        else
        cout << "NO" << endl;
    }
    return 0;
}
