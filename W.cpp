/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    char a;
    for(int i=0;i<3;i++)
    {
        if(s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2])
             {
                 c=1;
                 a=s[i];
             }
        else if(s[i]==s[i+1]&&s[i]==s[i+2]&&s[i+1]==s[i+2])
            c=0;
        else if(s[i]==s[i+1]&&s[i+1]!=s[i+2])
        {
            a=s[i+2];
        }
        else if(s[i]!=s[i+1]&&s[i+1]==s[i+2])
            a=s[i];
        else if(s[i]==s[i+2]&&s[i]!=s[i+1])
            a=s[i+1];

    }
    if(c==1)
        cout<<a<<endl;
    else if(c==0)
        cout<<-1<<endl;
    else
       cout<<a<<endl;
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> freq;
    for (char ch : s)
    {
        freq[ch]++;
    }
    char u= '$';
    bool fu= false;
    for (char ch : s)
    {
        if (freq[ch] == 1)
        {
            u = ch;
            fu= true;
            break;
        }
    }

    if (fu)
    {
        cout <<u<< endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}

