#include<bits/stdc++.h>
using  namespace  std;
//bool prime[90000001];
long long int n=90000000;
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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
	return 0;
}
