#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if(n<k||x<k-1)
            cout<<-1<<endl;
        else
        {
            int sum=0;
            for(int i=0;i<=k-1;i++)
            {
                sum+=i;
            }
            n-=k;
            for(int i=1;i<=n;i++)
            {
                if(k!=x)
                sum+=x;
                else
                    sum+=(k-1);
            }
            cout<<sum<<endl;
        }
    }
}
