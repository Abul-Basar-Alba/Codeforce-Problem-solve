/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string sr="";
        for(int i=0;i<s.size();i++)
        {
            int n=s[i]-'0';
            if(n>=5)
            {
                 ll x=s[i-1]-'0';
                 x+=1;
                 char ch=x+'0';
                 sr+=ch;
                 for(int j=i;j<s.size();j++)
                 {
                     sr+='0';
                 }
                 break;
            }
            else
                sr+=s[i];
        }
        cout<<sr<<endl;

    }
}
*/

/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        ll n=s.size();
        string sr = "";
        bool modified = false;
        ll f=0;

        if (s[0] >= '5')
        {
            sr += '1';
            for (int j = 1; j < s.size(); j++)
            {
                sr += '0';
            }
            sr += '0';
            cout << sr << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            int num = s[i] - '0';
            if (num >= 5&&(s[i-1]-'0')!=4)
            {
                sr[i-1] = sr[i-1] + 1;
                for (int j = i; j < s.size(); j++)
                {
                    sr += '0';
                }
                modified = true;
                break;
            }
            else if (num >= 5&&(s[i-1]-'0')==4)
            {
                 for (int k = n - 1; k >= 0; k--)
                {
                  if (s[k] >= '5')
                  {
                   for (int j = k; j < n; j++)
                   {
                    s[j] = '0';
                   }

                   int j = k - 1;
                   while (j >= 0 && s[j] == '9')
                   {
                    s[j] = '0';
                    j--;
                   }

                  if (j >= 0)
                  {
                    s[j] += 1;
                  }
                  else
                  {
                    s = '1' + s;
                  }
                 }
               }
               f=1;
               break;
            }
            else
            {
                sr += s[i];
            }
        }

        if(f!=0)
        {
            cout<<s<<endl;
            continue;
        }
        if (!modified)
        {
            cout << sr << endl;
        }
        else
        {
            cout << sr << endl;
        }
    }

    return 0;
}
*/

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        ll pos = s.size();
        bool ok= false;

        for (int i = s.size()-1; i >= 0; i--)
        {
            if (s[i] >= '5')
            {
                if(i==0)
                {
                    s='1'+s;
                    pos=i+1;
                }
                else
                {
                    s[i-1]++;
                    pos=i;
                }
            }
        }
        for(int j=pos;j<s.size();j++)
        {
            s[j]='0';
        }

        cout << s << endl;
    }

    return 0;
}


