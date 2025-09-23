#include<bits/stdc++.h>
using namespace std;
int main()
{
    //l*b=x; b*h=y; l*h=z here l=length ,b=base ,h=hight;
    //b=x/l then x/l*h=y then h=z/l then x/l*z/l=y so l^2=x*z/y;
    // same way b^2=y*x/z; and h^2=z*y/x;
    int x,y,z;
    cin>>x>>y>>z;
    int l=sqrt(x*z/y);
    int b=sqrt(y*x/z);
    int h=sqrt(z*y/x);


    cout<<4*(l+b+h)<<endl;//12 edges
}
