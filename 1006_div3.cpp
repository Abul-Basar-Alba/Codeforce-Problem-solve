#include <bits/stdc++.h>
#define ll ll int
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while(t--){
        ll n,k,p;
        cin>>n>>k>>p;
        k=abs(k);   
        ll x=0;
        if(k%p==0)
        {
        x=k/p;
        }
        else
        {
            x=k/p+1;
        }
        if(x<=n)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}