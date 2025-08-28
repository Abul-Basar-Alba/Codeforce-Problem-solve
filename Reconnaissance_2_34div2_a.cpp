#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int fistpos=0;
    int secondpos=n-1;
    int mn=abs(a[0]-a[n-1]);
    for(int i=0;i<n-1;i++)
    {
        int absulat=abs(a[i]-a[i+1]);
        if(absulat<mn)
        {
            fistpos=i;
            secondpos=i+1;
            mn=absulat;
        }
    }
    cout<<fistpos+1<<' '<<secondpos+1<<endl;
}
