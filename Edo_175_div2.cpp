#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        if(n<15)
        {
            ll cn=0;
            for(ll i=0;i<=n;i++)
            {
                if(i%3==i%5)
                {
                    cn++;
                }
            }
            cout<<cn<<endl;
            continue;
        }
        
        if(n%15==0)
        {
            ll res=n/15;
            cout<<(res*3)+1<<endl;
        }
        else if(n%15==1)
        {
            ll res=(n/15);
            cout<<(res*3)+2<<endl;
        }
        else if(n%15==2)
        {
            ll res=(n/15);
            cout<<(res*3)+3<<endl;
        }
        else{
            ll res=(n/15)+1;
            cout<<(res*3)<<endl;
        }
        

    }
}