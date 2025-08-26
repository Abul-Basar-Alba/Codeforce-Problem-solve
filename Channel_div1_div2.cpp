/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,a,q;
    cin>>n>>a>>q;
    string s;
    cin>>s;
    if(n==a)
    {
    cout<<"YES\n";
    continue;
    }
    int p=a;//online a manus
    int f=0;
    for(int i=0;i<q;i++)
    {
        if(s[i]=='+')
        {
          p++;
          a++;
        }
        else
        p--;
        if(p==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES\n";
    else
    {
        if(a>=n)
            cout<<"MAYBE\n";
        else
            cout<<"NO\n";
    }
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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(is_sorted(a.begin(),a.end()))
        {
         cout<<"YES"<<endl;
         continue;
        }
            if(k==1)
            cout<<"NO\n";
            else
            cout<<"YES\n";
     }
}

