#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,d;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int arr=a[0];
        for(int i=0;i<n;i++)
        {
            if(arr==a[i])
            {
                c++;
            }
            else
             d=i+1;
        }
        if(c==1)
            cout<<1<<endl;
        else
            cout<<d<<endl;
    }
}
