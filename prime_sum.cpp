/*#include<bits/stdc++.h>
//const N=10e18
using ll=ll;
using namespace std;
int main()
{
    ll N=3000;
    //cin>>N;
    vector<bool>mark(N);
    vector<int>prime;
    //vector<int>sum(N);
    ll sum=0;
    mark[0]=mark[1]=1;
    prime.push_back(2);
    for(int i=4;i<N;i+=2)
       mark[i]=1;
    for(int i=3;i<N;i+=2)
    {
        if(mark[i]==0)
            prime.push_back(i);
        for(int j=i*i;j<N;j+=(2*i))
        {
            mark[j]=1;
        }
    }
    for(int i=0;i<prime.size();i++)
    {
       // sum+=prime[i];
        cout<<prime[i]<<" ";
    }
       // cout<<sum<<endl;
}*/
#include<bits/stdc++.h>
//const N=10e18
using ll=ll;
using namespace std;
int main()
{
    ll N=3000;
    //cin>>N;
    vector<bool>mark(N);
    vector<int>prime;
    //vector<int>sum(N);
    ll sum=0;
    mark[0]=mark[1]=1;
    prime.push_back(2);
    for(int i=4;i<N;i+=2)
       mark[i]=1;
    for(int i=3;i<N;i+=2)
    {
        if(mark[i]==0)
            prime.push_back(i);
        for(int j=i*i;j<N;j+=(2*i))
        {
            mark[j]=1;
        }
    }
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
           for(int j=0;j<prime.size();j++)
           {
               if(prime[j]==i)
                sum++;
           }
       }
    }
        cout<<sum<<endl;
}
