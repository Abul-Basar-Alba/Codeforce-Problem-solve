/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    cout<<s.size()<<endl;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll h;
    cin>>h;
    double ans=sqrt(h*(12800000+h));
    cout << fixed << setprecision(9) <<ans<< endl;
    //printf("%0.9d\n",ans);
}
