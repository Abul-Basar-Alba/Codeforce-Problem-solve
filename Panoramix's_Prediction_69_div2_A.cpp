#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    //mark[0]=1;
    int N=50;
vector<bool>mark(N);
vector<int>prime;
    for(int i=2;i*i<=N;i++)
    {
        if(mark[i]==0)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                mark[j]=1;
            }
        }
    }
    for(int i=2;i<=N;i++)
    {
        if(mark[i]==0)
        {
            prime.push_back(i);
        }
    }
     int c=0;
    for(int k=0;k<prime.size();k++)
    {
        if(prime[k]==n && prime[k+1]==m)
        {
           c++;
        }
    }
    if(c!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
