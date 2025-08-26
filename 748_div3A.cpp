#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
	cin>>a>>b>>c;
	int mx = max({a,b,c});
	if(a==b&&b==c)
		cout<<1<<" "<<1<<" "<<1<<"\n";
	else if(a>b&&a>c)
		cout<<0<<" "<<mx-b+1<<" "<<mx-c+1<<"\n";
	else if(b>a&&b>c)
		cout<<mx-a+1<<" "<<0<<" "<<mx-c+1<<"\n";
	else if(c>a&&c>b)
		cout<<mx-a+1<<" "<<mx-b+1<<" "<<0<<"\n";
	else if(a==mx&&b==mx)
		cout<<1<<" "<<1<<" "<<mx-c+1<<"\n";
	else if(a==mx&&c==mx)
		cout<<1<<" "<<mx-b+1<<" "<<1<<"\n";
	else if(b==mx&&c==mx)
		cout<<mx-a+1<<" "<<1<<" "<<1<<"\n";
    }
}
/*#include<bits/stdc++.h>
using namespace std;
#define int ll int
void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	int mx = max({a,b,c});
	if(a==b&&b==c)
		cout<<1<<" "<<1<<" "<<1<<"\n";
	else if(a>b&&a>c)
		cout<<0<<" "<<mx-b+1<<" "<<mx-c+1<<"\n";
	else if(b>a&&b>c)
		cout<<mx-a+1<<" "<<0<<" "<<mx-c+1<<"\n";
	else if(c>a&&c>b)
		cout<<mx-a+1<<" "<<mx-b+1<<" "<<0<<"\n";
	else if(a==mx&&b==mx)
		cout<<1<<" "<<1<<" "<<mx-c+1<<"\n";
	else if(a==mx&&c==mx)
		cout<<1<<" "<<mx-b+1<<" "<<1<<"\n";
	else if(b==mx&&c==mx)
		cout<<mx-a+1<<" "<<1<<" "<<1<<"\n";
}
signed main(){
	int t;
	cin>>t;
	while(t--)
		solve();
}*/
