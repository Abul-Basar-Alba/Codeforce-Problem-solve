#include<bits/stdc++.h>
#define ll ll int
using  namespace  std;
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n];
    int mx=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%m==0)
        {
        if((a[i]/m)>=mx)//(ceil)floating digit convert immediate getter integer number
        {
            mx=ceil(a[i]/m);
            c=i;
        }
        }
        else
        {
           if((a[i]/m+1)>=mx)
        {
            mx=(a[i]/m)+1;
            c=i;
        }
        }
    }
        cout<<c+1<<endl;

    /*if(mx<m)
        cout<<n<<endl;
    else
    {
       cout<<c+1<<endl;
    }*/
}
