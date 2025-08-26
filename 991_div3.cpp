
//A.Line Breaks

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m; 
//         cin >> n >> m;

//         vector<string>s(n);
//         for (int i = 0; i < n; i++) 
//         {
//             cin >> s[i];
//         }

//         ll total= 0; 
//         ll x = 0;            

//         for (int i = 0; i < n; i++) 
//         {
//             if (total + s[i].length() <= m)
//              {
//                 total += s[i].length();
//                 x++;
//             } 
//             else 
//             {
//                 break; 
//             }
//         }

//         cout << x << endl; 
//     }

//     return 0;
// }

//B.Transfusion

// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll

// void solve() 
// {
//     ll n;
//     cin >> n;
//     vector<ll> arr(n);
//     ll sum = 0;
//     for (ll i = 0; i < n; i++) 
//     {
//         cin >> arr[i];
//         sum += arr[i];
//     }

//     if (sum % n != 0) 
//     {
//         cout << "NO\n";
//         return;
//     }

//     ll oddsum = 0, evensum = 0;
//     for (ll i = 0; i < n; i++) 
//     {
//         if (i % 2 == 0) 
//         {
//             oddsum += arr[i];
//         } 
//         else 
//         {
//             evensum += arr[i];
//         }
//     }

//     ll target = sum / n;
//     ll oddinx = (n + 1) / 2; 
//     ll eveninx = n / 2;     

   
//     if (oddsum == target * oddinx && evensum == target * eveninx) 
//     {
//         cout << "YES\n";
//     } 
//     else 
//     {
//         cout << "NO\n";
//     }
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         solve();
//     }
//     return 0;
// }

//C.Uninteresting Number

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll sum = 0,c2=0,c3=0;
        for (int i = 0; i < s.size(); i++)
        {
            sum+=( s[i] - '0');
            if(s[i]=='2')
            c2++;
            if(s[i]=='3')
            c3++;
        
        }
        bool ok = false;
        if (sum % 9 == 0)
        {
            cout << "YES\n";
            continue;
        }
    
    	for(ll i=0;i<=min(100LL,c2);i++)
        {
    		for(ll j=0;j<=min(100LL,c3);j++)
            {
    			if((sum+(2LL*i)+(6LL*j))%9LL==0)
                {
    				ok=true;
    				break;
    			}
    		}
    		if(ok)break;
    	}
 
    	if(ok)
        {
    		cout<<"YES"<<endl;
    	}
    	else
        {
    		cout<<"NO"<<endl;
    	}
        
    }
}
