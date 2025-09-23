#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int L=0,C=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
            L++;
        else
            C++;
    }
    int l=0,c=0,ans=-1;;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='L')
            l++;
        else
            c++;
        if(l!=L-l&&c!=C-c)
            ans=i+1;
    }


    cout<<ans<<endl;

}
