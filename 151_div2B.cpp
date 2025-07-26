/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    //sort(a,a+n);
    if(sum%n==0)
        cout<<n<<endl;
    else
        cout<<n-1<<endl;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll xa,ya,xb,yb,xc,yc,ab=0,bc=0,ac=0;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;

         ab=abs(xa-xb)+abs(ya-yb)+1;
         bc=abs(xb-xc)+abs(yb-yc)+1;
         ac=abs(xa-xc)+abs(ya-yc)+1;
         if(bc==ab+ac-1)
            cout<<1<<endl;
         else
         {
             ll s=ab+ac-bc;
             ll r=((s-1)/2)+1;
             cout<<r<<endl;
         }
    }
}
