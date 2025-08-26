#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
    int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==k)
        {
            c++;
        }
    }
    if(c==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }

}
