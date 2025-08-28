#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ind=-1;
        int sum=0;
        for(int i=s.size()-2;i>0;i--)
        {
            int x=(s[i]-'0');
            int y=(s[i+1]-'0');
            if(x+y>=10)
            {
            sum=x+y;
            ind=i;
            break;
            }
            //mx=(mx,sum);
        }
        if(ind==-1)
        {
            int x=s[0]-'0';
            int y=s[1]-'0';
            sum=x+y;
            cout<<sum;
            for(int i=2;i<s.size();i++)
                cout<<s[i];
            cout<<endl;
        }
        else
        {
          for(int i=0;i<ind;i++)
                cout<<s[i];
          cout<<sum;
          for(int i=ind+2;i<s.size();i++)
          {
              cout<<s[i];
          }
          cout<<endl;
        }
    }
}
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x;
        cin >> x;

        int maxSum = 0;
        string result = x;

        for (int i = 0; i < x.size() - 1; ++i)
        {
            int sum = (x[i] - '0') + (x[i + 1] - '0');
            if (sum >maxSum)
            {
                maxSum = sum;
                result = x;
                result.erase(i, 2);
                result.insert(i, to_string(sum));
            }
        }
        cout << stoi(result) << endl;
    }
    return 0;
}*/
