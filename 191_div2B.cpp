#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int n=10000007;
vector<bool>mark(n);
vector<int>v;
void solve()
{
    mark[0]=1;
    for(int i=2;i*i<=n;i++)
    {
        if(mark[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                mark[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(mark[i]==0)v.push_back(i);
    }
}
int main()
{
    solve();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cout<<v[i]<<' ';
}
/*#include<bits/stdc++.h>
using  namespace  std;
//bool prime[90000001];
int n=90000000;
vector<bool> make(n);
vector<int>v;
void sieve()
{
	make[0]=1;
	for(int i=2;i*i<=n;i++)
	{
		if(make[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				make[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(make[i]==0)v.push_back(i);
	}
}
int main()
{
	sieve();
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		cout<<v[i]<<' ';
	return 0;
}*/
