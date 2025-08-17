#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        /*int min=a[0];
        ll int sum=1;
        for(int j=0;j<n;j++)
        {
            if(min>=a[j])
            {
               min=a[j]+1;
            }
            sum=sum*a[j]
        }*/
        sort(a,a+n);
        a[0]=a[0]+1;
        ll int sum=1;
        for(int j=0;j<n;j++)
        {
            sum=sum*a[j];
        }
        cout<<sum<<endl;

    }
}
