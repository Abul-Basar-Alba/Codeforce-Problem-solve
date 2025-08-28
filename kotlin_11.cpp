// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//     ll x,m;
//     cin>>x>>m;
//     if(x>m)
//     swap(x,m);
//     cout<<x<<' '<<m<<endl;
//    }
// }

//kotlin version 

// import java.util.Scanner

// fun main() {
//     val sc = Scanner(System.`in`)
//     val t = sc.nextLong()
    
//     repeat(t.toInt()) {
//         var x = sc.nextLong()
//         var m = sc.nextLong()

//         if (x > m) {
//             val temp = x
//             x = m
//             m = temp
//         }
//         println("$x $m")
//     }
// }

//B

// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//     ll n;
//     cin>>n;
//     string s;
//     cin>>s;
//     ll r=sqrt(n);
//     if(r*r!=n)
//     {
//         cout<<"NO\n";
//         continue;
//     }
//     ll z=r-2;
//     z=z*z;
//     ll cn=0;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='0')
//         cn++;
//     }
//     if(cn==z)
//     cout<<"YES\n";
//     else
//     cout<<"NO\n";
//    }
// }

//kotlin version
// import kotlin.math.sqrt
 
// fun main() {
//     val t = readLine()!!.toLong()
 
//     repeat(t.toInt()) {
//         val n = readLine()!!.toLong()
//         val s = readLine()!!
 
//         val r = sqrt(n.toDouble()).toLong()
 
//         if (r * r != n) {
//             println("NO")
//             return@repeat
//         }
 
//         val z = (r - 2) * (r - 2)  
//         val cn = s.count { it == '0' } 
 
//         if (cn == z.toInt()) { 
//             println("YES")
//         } else {
//             println("NO")
//         }
//     }
// }
#include<bits/stdc++.h>
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
    ll n;
    cin>>n;
    vector<ll>v(n+2);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    ll tem1=v[0];
    ll cn1=0;
    for(int i=0;i<n;i++)
    {
      if(v[i]==tem1)
      cn1++;
      else
      break;
    }
    ll cn2=0;
    ll s=0;
    ll tem2=v[n-1];
    for(int i=n-1;i>=0;i--)
    {
      if(v[i]==tem1)
      s++;
      else
      break;
    }
    for(int i=n-1;i>=0;i--)
    {
      if(v[i]==tem2)
      cn2++;
      else
      break;
    }
    if(cn1==n)
    {
      cout<<0<<endl;
    }
    else
    {
     ll x=cn1+s;
     ll mx=max(cn1,cn2);
     mx=max(x,mx);
     cout<<n-mx<<endl;

    }
   }
}

    