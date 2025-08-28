// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll x;
//     cin>>x;
//     bool ok=false;
//     for(int i=1;i<=6;i++)
//     {
//       for(int j=1;j<=6;j++)
//       {
//         if(i+j==x)
//         {
//           ok=true;
//           break;
//         }
//       }
//       if(ok)
//       break;
//     }
//     if(ok)
//     cout<<"Yes\n";
//     else
//     cout<<"No\n";
// }

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<string, int> mp;
    set<string> st;

    for (int i = 0; i < n; i++) 
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1 == "a") 
        {  
            if (st.find(s2) ==st.end()) 
            {
                cout << "OK\n";
                st.insert(s2);
                mp[s2] = 1;
            } 
            else 
            {
                
                string s;
                while (st.find(s= s2 + to_string(mp[s2])) != st.end()) 
                {
                    mp[s2]++;
                }
                cout << s << endl;
                st.insert(s);
            }
        } 
        else if (s1 == "d") 
        {  
            if (st.find(s2) != st.end()) 
            {
                cout << "DELETED\n";
                st.erase(s2);
            } 
            else 
            {
                cout << "INVALID\n";
            }
        }
    }
    return 0;
}
