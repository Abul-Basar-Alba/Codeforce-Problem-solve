/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a!=b&&a==c)
        cout<<b<<endl;
        else if(a!=c&&a==b)
        cout<<c<<endl;
        else if(b!=a&&b==c)
        cout<<a<<endl;
    }

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

char findc(vector<vector<char>>& square)
 {
    map<char,int> count;

    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (square[i][j] != '?')
            {
                count[square[i][j]]++;
            }
        }
    }

    for (auto& pair : count)
    {
        if (pair.second == 2)
        {
            return pair.first;
        }
    }

    return ' ';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<vector<char>> square(3, vector<char>(3));

        for (int i = 0; i < 3;i++)
        {
            for (int j = 0; j < 3;j++)
            {
                cin >> square[i][j];
            }
        }

        char rep= findc(square);
        cout << rep << endl;
    }

    return 0;
}*/
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
        ll a[n+2];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll x=sqrt(sum);
        if((x*x)==sum)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}*/
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

      string s;
      cin>>s;
      string sr="";
      for(int i=0;i<n;i++)
      {
          if(s[i+1]=='a'&&(s[i+2]=='b'||s[i+2]=='c'||s[i+2]=='d'))
            sr.push_back(3,s[i]);
          else if(s[i+1]=='a'&&(s[i+2]==''||s[i+2]=='c'||s[i+2]=='d'))

      }
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    t*=3;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s[0]=='?')
        {
            if(s[1]=='A'&&s[2]=='C')cout<<'B'<<endl;
            else if(s[1]=='B'&&s[2]=='C')cout<<'A'<<endl;
            else if(s[1]=='A'&&s[2]=='B')cout<<'C'<<endl;
        }
    }
}
