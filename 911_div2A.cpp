#include<bits/stdc++.h>
#define ll long long int
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
        int d=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')
                c++;
            if(s[i]=='.')
                d++;
        }
        if(c!=0)
            cout<<2<<endl;
        else
            cout<<d<<endl;

    }
}


