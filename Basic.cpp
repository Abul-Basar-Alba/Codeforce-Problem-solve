//A
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
    
//         ll n;
//         cin>>n;
//         vector<ll>v(n);
//         ll sum=0;
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//             sum+=v[i];
//         }
//         cout<<abs(sum)<<endl;
// }

//B

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     ll t;
//     cin>>t;
//     ll ans=-1;
//     for(int i=0;i<n;i++)
//     {
//       if(v[i]==t)
//       {
//       ans=i;
//       break;
//       }
//     }
//     cout<<ans<<endl;
// }

//c
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     ll mn=v[0];
//     ll pos=1;
//     for(int i=1;i<n;i++)
//     {
//        if(mn>v[i])
//        {
//         mn=v[i];
//         pos=i+1;
//        }
//     }
//     cout<<mn<<" "<<pos<<endl;
// }

//D
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     string s;
//     cin>>s;
//     cout<<"Hello, "<<s<<endl;
// }

//E

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll a,b;
//     cin>>a>>b;
//     ll sum=a+b;
//     ll mul=a*b;
//     ll sub=a-b;
//     cout<<a<<" + "<<b<<" = "<<sum<<endl;
//     cout<<a<<" * "<<b<<" = "<<mul<<endl;
//     cout<<a<<" - "<<b<<" = "<<sub<<endl;
// }

//F
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     double pi = 3.141592653;
//     double a;
//     cin>>a;
//     double area=pi*(a)*(a);
//     cout<< fixed << setprecision(9)<<area<<endl;
// }

//G
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     string x,y;
//     cin>>x>>y;
//     ll n1=x.size()-1;
//     ll n2=y.size()-1;
//     char c1=x[n1];
//     char c2=y[n2];
//     ll a=c1-'0';
//     ll b=c2-'0';
//     cout<<a+b<<endl;
    
// }

//H
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<endl;
//     }
    
// }

//I

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin>>n;
//     vector<ll>v;
//     for(int i=2;i<=n;i+=2)
//     {
//         v.push_back(i);
//     }
//     if(v.empty())
//     cout<<-1<<endl;
//     else
//     {
//         for(int i:v)
//         cout<<i<<endl;
//     }
    
// }

//J

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     ll e=0,odd=0,pos=0,neg=0;
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//         if(v[i]%2==0)
//         e++;
//         else
//         odd++;
//         if(v[i]>0)
//         pos++;
//         else if(v[i]<0)
//         neg++;
//     }
//     cout<<"Even: "<<e<<'\n'<<"Odd: "<<odd<<'\n'<<"Positive: "<<pos<<'\n'<<"Negative: "<<neg<<'\n';
    
    
// }

//K

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
    
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
        
//     }
//     ll mx=*max_element(v.begin(),v.end());
//     cout<<mx<<endl;
    
    
// }

//L

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin>>n;

//     for(int i=1;i<=12;i++)
//     {
//       cout<<n<<" "<<'*'<<" "<<i<<" "<<"="<<" "<<n*i<<endl;
//     } 
// }

//M

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++)
//     {
//       cin>>v[i];
//     } 
//     sort(v.begin(),v.end());
//     for(int i:v)
//      cout<<i<<" ";
// }

//N

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)  
    {
        cin >> v[i];
    } 
    ll x;
    cin >> x;
    ll a, b;
    cin >> a >> b;
    
    v.erase(v.begin() + x - 1);
    
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    cout << v.size() << endl;
    
    for(int i = 0; i < v.size(); i++)  
    {
        cout << v[i] << " ";
    }
    return 0;
}