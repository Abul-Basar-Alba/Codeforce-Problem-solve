/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int l,r,u,d;
    while(cin>>n)
    {
        int X[n+1],Y[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>X[i]>>Y[i];
        }
        int point=0;
        for(int i=0;i<n;i++)
        {
            l=r=u=d=0;
            int x=X[i];
            int y=Y[i];
            for(int j=0;j<n;j++)
            {
                if(X[j]==x)
                {
                    if(y>Y[j])d++;
                    if(y<Y[j])u++;
                }
                if(Y[j]==y)
                {
                    if(x>X[j])l++;
                    if(x<X[j])r++;
                }
            }
            if(d>0&&u>0&&l>0&&r>0)
                point++;
        }
        cout<<point<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main()
{
    int n, t(0);
    cin >> n;
    int x[n], y[n];

    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++)
    {
        bool r(false), l(false), u(false), d(false);
        for (int j = 0; j < n; j++)
        {
            if (x[j] > x[i] and y[j] == y[i]) r = true;
            if (x[j] < x[i] and y[j] == y[i]) l = true;
            if (x[j] == x[i] and y[j] > y[i]) u = true;
            if (x[j] == x[i] and y[j] < y[i]) d = true;
        }
        if (r and l and u and d) t++;
    }

    cout << t << endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    int x[n+1],y[n+1];
    for(int i=0;i<n;i++)
      cin>>x[i]>>y[i];
    for(int i=0;i<n;i++)
    {
        int r=0,l=0,u=0,d=0;
        for(int j=0;j<n;j++)
        {
            if(x[j]>x[i]&&y[j]==y[i])u++;
            if(x[j]<x[i]&&y[j]==y[i])d++;
            if(x[j]==x[i]&&y[j]>y[i])r++;
            if(x[j]==x[i]&&y[j]<y[i])l++;
        }
        if(r>0&&l>0&&d>0&&u>0)
            t++;
    }
    cout<<t<<endl;
}
