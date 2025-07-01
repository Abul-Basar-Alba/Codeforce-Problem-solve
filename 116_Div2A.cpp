#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'&&s[i+1]=='b')
                a++;
            if(s[i]=='b'&&s[i+1]=='a')
                b++;
        }
        if(a==b)
            cout<<s<<endl;
        else
        {
                if(s[0]=='b')
                {
                    s[0]='a';
                }
                else
                {
                    s[0]='b';
                }
            cout<<s<<endl;
        }
    }
}

