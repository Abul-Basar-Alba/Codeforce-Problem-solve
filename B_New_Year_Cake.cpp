#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll a,b;
    cin>>a>>b;
    ll res1=0,res2=0;
    ll f1=0,f2=0;
    ll temp_a=a,temp_b=b;
    for(ll i=0;;i++)
    {
       if(temp_a>0&&temp_a>=pow(2,i)&&f1==0)
       {
           res1++;
           temp_a-=pow(2,i);
           f1=1;
       }
       else if(temp_b>0&&temp_b>=pow(2,i)&&f1==1)
       {
          res1++;
           temp_b-=pow(2,i);
           f1=0; 
       }
       else
       {
           break;
       }
    }
temp_a=a;
temp_b=b;
    for(ll i=0;;i++)
    {
       if(temp_b>0&&temp_b>=pow(2,i)&&f2==0)
       {
           res2++;
           temp_b-=pow(2,i);
           f2=1;
       }
       else if(temp_a>0&&temp_a>=pow(2,i)&&f2==1)
       {
          res2++;
           temp_a-=pow(2,i);
           f2=0; 
       }
         else
         {
              break;
         }
    }
    cout<<max(res1,res2)<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}