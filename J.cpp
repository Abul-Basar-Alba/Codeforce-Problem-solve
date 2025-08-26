#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int t=a*60+b;
    int A=c*60+d+1;
    if (t<A)
    {
        cout<<"Takahashi"<<endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }

}

