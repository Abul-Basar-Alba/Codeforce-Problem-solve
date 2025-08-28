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
        ll n;
        cin>>n;
        if(n>=5)
        cout<<"Alice\n";
        else
        cout<<"Bob\n";
    }
}
*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll c=0;
    string s1="";
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='|')
        {
            c++;
        }
        if(c!=0&&c==1)
        {
           continue;
        }
        else if(c==2)
           s1+=s[i+1];
        else
            s1+=s[i];
    }
    cout<<s1<<endl;
}
