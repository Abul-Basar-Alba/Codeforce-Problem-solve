/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
ll power(ll base,ll pow,ll mod)
{
    ll ans=1;
    while(pow)
    {
        if(pow%2==1)
        {                        // using mod function time limit if 10^18 power
            ans=(ans*base)%mod;//logic ans*=base and pow-=1 if power odd
            pow--;
        }
        else
        {
            base=(base*base)%mod;// logic base*=base and pow/=2 if power even
            pow/=2;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<power(n,m,1e9)<<endl;
    }
    return 0;
}*/
// simple idea
/*ans=1;
for(int i=1;i<=pow;i++)
{
    ans=(ans*base)%mod;
}
cout<<ans;*/

// Binary exponentiation ittarative mathod(luv)
// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// const int mod=1e9+7;
// ll power(ll base,ll pow)
// {
//     ll ans=1;
//     while(pow)
//     {
//     if(pow&1)
//     {
//        ans=(ans*base)%mod;
//     }
    
//         base=(base*base)%mod;
//         pow>>=1;
    
//     }
//     return ans;
// }

// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,x;
//         cin>>n>>x;
//         ll res=power(2LL,n);
//         res-=1;
//         res=(res*x)%mod;
//         cout<<res<<endl;
//     }
// }


// Binary exponentiation recursive mathod(luv)
// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// const int mod=1e9+7;
// ll power(ll base,ll pow)
// {
//     if(pow==0)
//     return 1;

//     ll ans=power(base,pow/2);

//     if(pow&1)
//     {
//        return (base*((ans*ans)%mod))%mod;
//     }
//     else
//     {
//         return (ans*ans)%mod;
//     }
// }
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,x;
//         cin>>n>>x;
//         ll res=power(2LL,n);
//         res-=1;
//         res=(res*x)%mod;
//         cout<<res<<endl;
//     }
// }


//****lurge expanantiation using binary multiply */
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
const int mod=1e9+7;

// Declare the prototype of the binarymultiply function
ll binarymultiply(ll a, ll b);

// Function to perform binary exponentiation
ll power(ll base, ll pow)
{
    ll ans = 1;
    while (pow > 0)
    {
        if (pow & 1)
        {
            ans = binarymultiply(ans, base);
        }
        base = binarymultiply(base, base);
        pow >>= 1;
    }
    return ans;
}

// Function to safely multiply two numbers under mod
ll binarymultiply(ll a, ll b)
{
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        
        // Calculate 2^n % mod
        ll res = power(2LL, n);
        
        // Adjust for (2^n - 1)
        res = (res - 1 + mod) % mod;
        
        // Multiply by x and take result modulo mod
        res = (res * x) % mod;
        
        cout << res << endl;
    }
}
