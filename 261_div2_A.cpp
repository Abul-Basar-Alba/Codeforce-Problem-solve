#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<x1<<' '<<y1+a<<' '<<x1+a<<' '<<y1;
}
