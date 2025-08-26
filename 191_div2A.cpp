#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int ons=0;
    for(auto & it:a)
    {
        cin>>it;
        ons+=it;
        if(it==1)
            it=-1;
        else
            it=1;
    }
    if(ons==n)
        cout<<n-1<<endl;
    else
    {
        int ans=0,x=0;
        for(int i=0;i<n;i++)
        {
            x=max(0,x+a[i]);//Kadane's Algorithm.
            ans=max(x,ans);
        }
        cout<<ons+ans<<endl;
    }
}
