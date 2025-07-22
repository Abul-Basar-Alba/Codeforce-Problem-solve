//string hashing

/*#include<bits/stdc++.h>
#define ll ll int
#define mod 1000000007
using namespace std;

ll gethas(string s)
{
    //ll int mod=1e9+7;
    int ans=0;
    int prime=31;
    int pow=1;
    for(ll i=0;i<s.size();i++)
    {
        ans=(ans+(s[i]*pow))%mod;
        pow=(pow*prime)%mod;
    }
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=gethas(s);
        cout<<ans<<endl;
    }
}*/

//Substring hashing

/*#include<bits/stdc++.h>
#define ll ll int
#define mod 1000000007
using namespace std;

ll power(ll prime,int sz)
{
 ll ans=1;
 for(int i=1;i<=sz;i++)
 {
     ans=(ans*prime)%mod;
 }
 return ans;
}

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    ll ar[n+4];
    ll prime=31;
    ar[0]=0;
    for(int i=0;i<n;i++)
    {
        ar[i+1]=(((ar[i]*prime)%mod)+s[i])%mod;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int sz=(r-l)+1;
        ll ans1=ar[r];
        ll ans2=ar[l-1];
        ll pw=power(prime,sz);
        ans2=(ans2*pw)%mod;
        ll ans=ans1-ans2;
        cout<<ans<<endl;
    }
}*/

#include<bits/stdc++.h>
#define ll ll int
#define mod 1000000007
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    ll n=s1.size();
    ll m=s2.size();
    ll ar[n+4];
    ll prime=7;
    ar[0]=0;
    for(ll i=0;i<n;i++)
    {
       ar[i+1]=(((ar[i]*prime))%mod+s1[i])%mod;
    }

    ll val=0;
    for(ll i=0;i<m;i++)
    {
        val=(((val*prime)%mod)+s2[i])%mod;
    }

    ll val2=1;
    for(ll i=1;i<=m;i++)
    {
       val2=(prime*val2)%mod;
    }
    ll cn=0;
    for(ll i=m;i<=n;i++)
    {
        ll ans=ar[i];
        ll ans1=ar[i-m];
        ans1=(ans1*val2)%mod;
        ans=ans-ans1;
        if(ans<0)ans+=mod;
        if(ans==val)cn++;
    }
    cout<<cn<<endl;
}



// #include <bits/stdc++.h>
// using namespace std;

// namespace str {
// /** Computes the Pi array of s. */
// vector<int> pi(const string &s) {
// 	int n = (int)s.size();
// 	vector<int> pi_s(n);
// 	for (int i = 1, j = 0; i < n; i++) {
// 		while (j > 0 && s[j] != s[i]) { j = pi_s[j - 1]; }
// 		if (s[i] == s[j]) { j++; }
// 		pi_s[i] = j;
// 	}
// 	return pi_s;
// }
// }  // namespace str

// int main() {
// 	string P, T;
// 	cin >> T >> P;
// 	string S = P + '#' + T;
// 	vector<int> pi = str::pi(S);
// 	int ans = 0;
// 	for (int l : pi) {
// 		if (l == P.size()) { ans++; }
// 	}
// 	cout << ans << '\n';
// }
