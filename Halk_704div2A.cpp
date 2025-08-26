#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    string s="I hate";
    for(int i=2;i<=t;i++)
    {
       if(i%2==0)
            s+=" that I love";
       else
          s+=" that I hate";
    }
    s+=" it";
    cout<<s<<endl;
}
