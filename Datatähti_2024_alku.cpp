
// //A: Blizzard
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll a[11],b[11];
//     for(int i=0;i<10;i++)
//     {
//       cin>>a[i];
//     }
//     for(int i=0;i<10;i++)
//     {
//         cin>>b[i];
//     }
//     ll x=0,y=0;
//     for(int i=0;i<10-1;i++)
//     {
//         if(a[i]<a[i+1])
//         {
//           x+=(a[i+1]-a[i]);
//         }
//         if(b[i]<b[i+1])
//         {
//           y+=(b[i+1]-b[i]);
//         }
//     }
//     if(y>x)
//     cout<<1<<endl;
//     else
//     cout<<2<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;
//     string res = "";

//     int i = 0;
//     while (i < s.size()) 
//     {
//         if (isdigit(s[i])) 
//         {
//             int x = s[i] - '0';  
//             string temp = s.substr(i + 1, x);  
//             s.insert(i + 1, temp);  
//             s.erase(i, 1);  
            
//         } 
//         else 
//         {
//             res += s[i];  
//             s.erase(i, 1); 
//             i=0;
//         }
//     }

//     cout << res << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end());
    int k=1;
    for(int i=0;i<v.size();i++)
    {
      if(k!=v[i])
      {
        break;
      }
      k++;

    }
    cout<<k<<endl;
}
