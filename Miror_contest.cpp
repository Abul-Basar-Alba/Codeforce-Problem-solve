//N. Fixing the Expression

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
//         string s;
//         cin>>s;
//         ll x=s[0]-'0';
//         ll y=s[2]-'0';
//         if(x==y)
//         {
//             cout<<s[0]<<"="<<s[2]<<endl;
//         }
//         else if(x>y)
//          cout<<s[0]<<">"<<s[2]<<endl;
//         else
//         cout<<s[0]<<"<"<<s[2]<<endl;
//     }
// }

//J. Waiting for...

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;

    ll  wait= 0; 
    vector<string> ans; 

    for (int i = 0; i < t; ++i) 
    {
        char c; 
        ll x; 
        cin >> c >> x;

        if (c == 'P') 
        {
            wait +=x; 
        } 
        else if (c== 'B')
         {
            if (wait < x) 
            {
                ans.push_back("YES"); 
            } 
            else 
            {
                ans.push_back("NO"); 
            }
         
            wait = max(0LL, wait - x);
        }
    }

    for (const string& res : ans) 
    {
        cout << res << endl;
    }

    return 0;
}



