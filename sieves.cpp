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
using ll=long long;
using namespace std;
int main()
{
    const ll N = 1e7;
    //cin>>N;
    vector<bool> mark(N, 0);
    vector<ll>prime;
    //vector<int>sum(N);
    ll sum=0;
   
   for (ll i = 2; i < N; i++) {
        if (!mark[i]) {
            prime.push_back(i);
            if (1LL * i * i < N) {
                for (ll j = i * i; j < N; j += i)
                    mark[j] = 1;
            }
        }
    }
    cout << "Total Primes under 1e7: " << prime.size() << "\n";
    cout << "First 10 primes: ";
    for (int i = 0; i < 10; i++)
        cout << prime[i] << " ";
    cout << endl;
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

