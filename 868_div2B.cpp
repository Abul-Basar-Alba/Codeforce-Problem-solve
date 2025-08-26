/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(k==1||is_sorted(v.begin(),v.end()))
        {
            cout<<0<<endl;
            continue;
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            int tem=abs(v[i]-(i+1));
            if(tem%k!=0)
                c++;
        }
        if(c==0)
            cout<<0<<endl;
        else if(c==2)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         int mod=1000;
        for(int i=1;i<=n;i++)
        {
            cout<<(n*i)%mod<<' ';
            //n+=add;
        }
        cout<<endl;
    }
}
