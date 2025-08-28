#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,sum=0;
    cin>>n;
    while(n!=0)
    {
        if(n%2==1)
            sum++;
        n=n/2;
    }
    cout<<sum<<endl;
}
