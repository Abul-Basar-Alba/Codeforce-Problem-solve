/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n+2];
        ll int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ans=a[0]-1;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])ans+=(a[i]-a[i-1]);
            //last=a[i];
        }
        cout<<ans<<endl;
    }

}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n+2];
        ll int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            ans+=max(0,a[i]-a[i-1]);
        }
        ans+=a[0]-1;
        cout<<ans<<endl;

    }
}
