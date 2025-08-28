#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    string s;
    cin>>s;
     //bool c(true);
     int c=0,d=0,cn=0;
    for(ll i=0;i<(int)s.size();i++)
    {
        if(s[0]!='1')
        {
            cn++;//return false;
        }
        if(s[i]!='1'&&s[i]!='4')
        {
            c++;//return false;
        }
        if(s.find("444")!=s.npos)
            d++;//return false;

         //return true;
    }
    if(c!=0||cn!=0||d!=0)
        cout<<"NO\n";
    else
        cout<<"YES\n";

}
