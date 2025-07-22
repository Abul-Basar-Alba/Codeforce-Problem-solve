#include<bits/stdc++.h>
//#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //int arr[n];
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max=*max_element(arr.begin(),arr.end());
    int min=*min_element(arr.begin(),arr.end());
    int mxc=count(arr.begin(),arr.end(),max);
    int mic=count(arr.begin(),arr.end(),min);
    if(mxc+mic<n)
    {cout<<"NO\n";}
   else if(abs(mxc-mic)>1)
    {cout<<"NO\n";}
   else
    cout<<"YES\n";
        /*for(int i=0;i<n;i++)
        {
            if(a[0]==a[i])
                c++;
        }
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int len=s.size();
        if(n==2||c==n)
            cout<<"YES\n";
        else if(len==2)
        {
            int d=0,cn=0;
            set<int>::iterator it;
            for(int i=0;i<n;i++)
            {
                it=s.begin();
                if(*it==a[i])
                   d++;
                else if(*it+1==a[i])
                   cn++;

            }
            if(d==cn||abs(d-cn)==1)
                cout<<"YES\n";
        }
        else
            cout<<"No\n";*/
    }
}
