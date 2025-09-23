#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s[3];
        for(int i=0;i<3;i++)
            cin>>s[i];
        if((s[0][0]!='.'&&s[0][0]==s[0][1]&&s[0][1]==s[0][2])||(s[0][0]!='.'&&s[0][0]==s[1][0]&&s[1][0]==s[2][0])||(s[0][0]!='.'&&s[0][0]==s[1][1]&&s[1][1]==s[2][2]))
            cout<<s[0][0]<<endl;
        else if((s[0][1]!='.'&&s[0][1]==s[1][1]&&s[1][1]==s[2][1]))
            cout<<s[0][1]<<endl;
        else if((s[1][0]!='.'&&s[1][0]==s[1][1]&&s[1][1]==s[1][2]))
            cout<<s[1][0]<<endl;
        else if((s[0][2]!='.'&&s[0][2]==s[1][1]&&s[1][1]==s[2][0])||(s[0][2]!='.'&&s[0][2]==s[1][2]&&s[1][2]==s[2][2]))
            cout<<s[0][2]<<endl;
        else if((s[2][0]!='.'&&s[2][0]==s[2][1]&&s[2][1]==s[2][2]))
            cout<<s[2][0]<<endl;
        else
            cout<<"DRAW"<<endl;
    }
}

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        string s[3];
        for (int i = 0; i < 3; i++)
            cin >> s[i];
        bool ok = true;
        for (int i = 0; i < 3; i++)
        {
            if (s[i][0] != '.' && s[i][0] == s[i][1] && s[i][1] == s[i][2])
            {
                cout << s[i][0] << endl;
                ok = false;
                break;
            }
            if (s[0][i] != '.' && s[0][i] == s[1][i] && s[1][i] == s[2][i])
            {
                cout << s[0][i] << endl;
                ok= false;
                break;
            }
        }

        if (ok)
        {
            if (s[0][0] != '.' && s[0][0] == s[1][1] && s[1][1] == s[2][2])
            {
                cout << s[0][0] << endl;
                ok = false;
            }
        else if (s[0][2] != '.' && s[0][2] == s[1][1] && s[1][1] == s[2][0])
            {
                cout << s[0][2] << endl;
                ok= false;
            }
        }
        if (ok)
        {
            bool f= false;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (s[i][j] == '.')
                    {
                        f= true;
                        break;
                    }
                }
                if (f)
                    break;
            }
            if (f)
                cout << "DRAW" << endl;
            else
                cout << "DRAW" << endl;
        }
    }
    return 0;
}*/
