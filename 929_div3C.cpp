
#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,l;
        cin>>a>>b>>l;

        set<int>s;
        int x=ceil(log(l)/log(a));//logarithm law
        int y=ceil(log(l)/log(b));
        for (int i=0;i<=x;i++)
        {
            for (int j=0;j<=y;j++)
            {
                int k=l/pow(a,i)/pow(b,j);//l=k*pow(a,x)*pow(b,y);
                if(k*pow(a,i)*pow(b,j)==l)
                    s.insert(k);
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
