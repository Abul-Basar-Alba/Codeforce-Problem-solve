#include<bits/stdc++.h>
#define ll ll int
#define V vector<ll>
using namespace std;
int main()
{
    ll x,y,z,n,att;
    cin>>x>>y>>z>>n;
    if((x*y*60)%100==0)
     att=(x*y*60)/100;
    else
    {
      att=((x*y*60)/100)+1;
    }
    int c=x-z;
    if(n+(c*y)>=att)
    {
        cout<<"Yes\n";
        z=x-z;
            att=att-n;
            V a;
            for(int i=0;i<z;i++){
                if(att>0){
                    a.push_back(min(att,y));
                    att-=y;
                }
                else{
                    a.push_back(0);
                }
            }
            reverse(a.begin(),a.end());
            for(auto x:a)cout<<x<<" ";cout<<endl;
    }
    else
        cout<<"No\n";

}
