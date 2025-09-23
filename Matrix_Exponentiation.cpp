//
//power off matrix;
//
/*#include<bits/stdc++.h>
using  namespace  std;

typedef ll int ll;
typedef unsigned ll int  llu;
#define N 101
ll ar[N][N],I[N][N];
ll mod = 1000000007;

void mul(ll A[][N],ll B[][N],ll n)
{
	ll i,j,k;
	ll R[n+1][n+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			R[i][j]=0;
			for(k=1;k<=n;k++)
			{
				ll x = (A[i][k]*B[k][j]);
				R[i][j]=(R[i][j]+x);
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			A[i][j]=R[i][j];
		}
	}
}

void power(ll A[][N],ll n,ll p)
{
	ll i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)I[i][j]=1;
			else I[i][j]=0;
		}
	}

	while(p)
	{
		if(p%2==1)
		{
			mul(I,A,n);
			p--;
		}
		else{
			mul(A,A,n);
			p/=2;
		}
	}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			A[i][j]=I[i][j];
		}
	}

}


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p,i,j,k;
		cin>>n>>p;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>ar[i][j];
			}
		}
		power(ar,n,p);

		//cout<<"print the answer"<<nl;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cout<<ar[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}*/
#include<bits/stdc++.h>
#define ll ll int
#define nl      '\n'
#define mod 1000000007
using namespace std;
#define N 101
ll ar[N][N],I[N][N];


void mul(ll A[][N],ll B[][N],ll dim)
{
    ll res[dim+1][dim+1];
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)
        {
            res[i][j]=0;
            for(ll k=0;k<dim;k++)
            {
                ll x =(A[i][k]*B[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}

void power(ll A[][N],ll dim,ll n)
{
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)
        {
            if(i==j)I[i][j]=1;
            else I[i][j]=0;
        }
    }

    while(n)
    {
        if(n%2)
        {
            mul(I,A,dim);
            n--;
        }
        else
        {
            mul(A,A,dim);
            n/=2;
        }
    }
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)A[i][j]=I[i][j];
    }
}


void prllmat(ll ar[][N],ll dim)
{
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)cout<<ar[i][j]<<" ";
        cout<<nl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll dim,n;
        cin>>dim>>n;
        for(ll i=0;i<dim;i++)
        {
            for(ll j=0;j<dim;j++)cin>>ar[i][j];
        }
        power(ar,dim,n);
        prllmat(ar,dim);
    }
    return 0;
}
