#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"safety"<<endl;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll i=0,j=1;
        string res="";
        while(i<n&&j<n)
        {
           if(s[i]==s[j])
           {
                res+=s[i];
                i=j+1;
                j+=2;
           }
           else
            j++;

        }
        cout<<res<<endl;
    }
}
