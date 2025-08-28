/*#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int ft[N];
int main()
{
    int n;
    cin>>n;
    int ar[2*n];
    for(int i=0;i<n*2;i++)
    {
        cin>>ar[i];
    }
    int c=0,m=INT_MIN;
    for(int i=0;i<n*2;i++)
    {
        ft[ar[i]]++;
        if(ft[ar[i]]==2)
            c--;
        else
            c++;
       m=max(m,c);
    }
    cout<<m<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
#define ll ll
int  main()
{
    ll j,i,m,n;
    //while(1){
    cin>>n>>m;
    ll ans=0, cnt=0, mx=0, mn=0,x,y;
    ll a[m];
    y=n;
    for(i=0;i<m;i++)
    {
    cin>>a[i], ans+=a[i];
    }
    sort(a, a+m);
    /// for mini
    for(i=0;i<m and n>0;i++)
    {
        x=a[i];
        while(x>0 and n>0)
        {
          mn+=x, x--, n--;
        }

    }

    ///for maxi

    n=y;
    for(i=0; i<n; i++)
    {
        sort(a, a+m);
        mx+=a[m-1];
        a[m-1]--;
    }


    cout<<mx<<" "<<mn<<endl;

}
