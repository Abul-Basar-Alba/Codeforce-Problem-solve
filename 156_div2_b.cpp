#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p1,p2,a1,a2,b1,b2;
        cin>>p1>>p2;
        cin>>a1>>a2;
        cin>>b1>>b2;
       double d1,d2,d3,d4,d5;
       d1=sqrt((p1-a1)*(p1-a1)+(p2-a2)*(p2-a2));//Home to A(x,y)  distance
       d2=sqrt((p1-b1)*(p1-b1)+(p2-b2)*(p2-b2));//Home to B(x,y)  distance
       d3=sqrt((a1-0)*(a1-0)+(a2-0)*(a2-0));//office to A(x,y)  distance
       d4=sqrt((b1-0)*(b1-0)+(b2-0)*(b2-0));//office to B(x,y)  distance
       d5=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));//A(x,y) and B(x,y) distance
       double x=min(d1,d2),y=min(d3,d4);// minimum distance of office and Home
       double ans=max(x,y);//maximum lighting path of home
       if(min(d1,d2)==d1&&min(d3,d4)==d3||min(d1,d2)==d2&&min(d3,d4)==d4)
       {
           cout<<setprecision(11)<<ans<<endl;
       }
       else
       {
           if(2*ans<d5)//if maximum path is tow times smaller than distance A and B than ans half.
            ans=d5/2;
           cout<<setprecision(11)<<ans<<endl;
       }

    }
}
