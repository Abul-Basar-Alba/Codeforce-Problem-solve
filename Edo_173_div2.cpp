
//A.Coin Transformation

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         ll coin=1;
//         while(n>3)
//         {
//             coin*=2;
//             n/=4;
//         }
//         cout<<coin<<endl;
//     }
// }

//B: Digits

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        cout<<1<<" ";
        if(n>=3||d%3==0)
        cout<<3<<" ";
        if(d%5==0)
        cout<<5<<" ";
        if(n>=3||d%7==0)
        cout<<7<<" ";
        if(n>=6||(n>=3&&d%3==0)||d%9==0)
        cout<<9;
        cout<<endl;
    }
}