#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,x,c=0;
    cin>>n>>x;
    if(x==1)
        cout<<"1"<<endl;
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(x%i==0&&x/i<=n)
                c++;
        }
        cout<<c<<endl;
    }
}
