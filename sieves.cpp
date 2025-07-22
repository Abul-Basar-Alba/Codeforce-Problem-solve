/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n=10000001;
    //vector<bool>mark(n);
    vector<ll>v;
    v.resize(n);
    for(ll i=1;i<n;i++)
    {
        v[i]=i;
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(v[i]==i)
        {
            for(ll j=i*i;j<n;j+=i)
            {
                v[j]=i;
            }
        }
    }
}*/
#include<bits/stdc++.h>
//const N=10e18
using ll=ll;
using namespace std;
int main()
{
    ll N=50000;
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
}
//#include<bits/stdc++.h>
//using  namespace  std;
////bool prime[90000001];
//int main()
//{
//    int n=90000000;
//    vector<bool> make(n);
//     vector<int>v;
//	make[0]=1;
//	for(int i=2;i*i<=n;i++)
//	{
//		if(make[i]==0)
//		{
//			for(int j=i*i;j<=n;j+=i)
//			{
//				make[j]=1;
//			}
//		}
//	}
//	for(int i=2;i<=n;i++)
//	{
//		if(make[i]==0)v.push_back(i);
//	}
//	int t;
//	cin>>t;
//	while(t--)
//    {
//        int x;
//        cin>>x;
//        cout<<v[x-1]<<endl;
//    }
//}

