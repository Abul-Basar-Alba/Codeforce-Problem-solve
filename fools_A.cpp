#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<"safety"<<endl;

}
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
        string s;
        cin>>s;
        ll f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='i'&&s[i+1]=='t')
               f=1;
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}*/
/*#include<bits/stdc++.h>
#define ll unsigned ll
using namespace std;
int main()
{
    ll t;
    cin>>t;
    cout << fixed << setprecision(10);
    while(t--)
    {
        ll r;
        cin>>r;
        double pi = 3.14159265359;
        double ans = pi * r * r*r;
        cout<<ans<<endl;
    }
}
*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(n<4)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(a.begin(),a.end());
    //int mn=min_element(a.begin(),a.end());
    cout<<a[n-4]*a[n-4]<<endl;

}*/
