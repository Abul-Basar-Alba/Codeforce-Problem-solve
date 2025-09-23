#include<bits/stdc++.h>
using namespace std;
/*void primefactor(int n)
{
    for(int i=2;i*i<=n;i++)
    {
       int cnt=0;
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            cout<<i<<"^"<<cnt<<",";
        }
    }
    if(n>1)
        cout<<n<<"^"<<1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        primefactor(n);
    }
    return 0;
}*/
//prime factorization problem solve UVa Online juge
void primefactor(int n)
{
    int ans=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans++;
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1)
        ans++;
        cout<<ans<<endl;
}
int main()
{
    int t;
    while(cin>>t)
    {
        if(t==0)
            break;
        cout<<t<<" : ";
        primefactor(t);
    }
    return 0;
}
