#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
     {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(is_sorted(a.begin(),a.end()))
        {
         cout<<0<<endl;
         continue;
        }
            int order=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==order+1)
                  order++;
            }
            int bug=n-order;
            int ans=(bug+k-1)/k;//(cell)=a/b=(a+b-1/b);
            cout<<ans<<endl;
     }
}
