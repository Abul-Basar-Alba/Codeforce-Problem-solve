#include <bits/stdc++.h>
using ll = ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a,b,c;
    cin >> a >> b >> c;
    ll d=b*b-4*a*c;
    if(a!=0&&d>0)
    {
        cout<<2<<endl;
       
        double x1=(-b+sqrt(d))/(2*a);
        double x2=(-b-sqrt(d))/(2*a);
        if(x1>x2)
            swap(x1,x2);
        cout<<fixed<<setprecision(10)<<x1<<"\n"<<x2<<endl;
    }
    else if(a!=0&&d==0)
    {
        cout<<1<<endl;
        double x=(-b)/(2*a);
        cout<<fixed<<setprecision(10)<<x<<endl;
    }
    else if(a!=0&&d<0)
    {
        cout<<0<<endl;
    }
    else if(a==0&&b==0&&c!=0)
    {
        cout<<0<<endl;
    }
    else if(a==0&&b!=0)
    {
        cout<<1<<endl;
        double x=(-c)/(double)b;
        cout<<fixed<<setprecision(10)<<x<<endl;
    }
    else if(a==0&&b==0&&c==0)
    {
        cout<<-1<<endl;
    }
}