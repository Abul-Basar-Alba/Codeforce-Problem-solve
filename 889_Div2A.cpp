#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==1)
        {
            cout<<1<<endl;
        }
        else
        {
        ll l=0;
        for(ll i=1;;i++)
        {
            if(n%i==0)
            {
               l++;
               //break;
            }
            else
                break;
        }
          cout<<l<<endl;
        }
    }
}
