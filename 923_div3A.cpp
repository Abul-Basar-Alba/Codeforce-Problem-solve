/*#include<bits/stdc++.h>
using namespace std;

int solve (string s)
{
    int n = s.length();
    int lef= n, r= -1;

    for (int i = 0; i < n;i++)
    {
        if (s[i] == 'B')
        {
            lef= min(lef, i);
            r= max(r, i);
        }
    }

    return max(0, r-lef+ 1);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << solve (s) << endl;
    }

}*/
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
        string s;
        cin>>s;
        int lef=0,r=0;
        for(int i=0;i<n;i++)
        {
          if(s[i]=='B'&&lef==0)
                lef=i+1;
          if(s[i]=='B'&&lef!=0)
                r=i+1;;
        }
        cout<<abs(r-lef)+1<<endl;
    }
}

