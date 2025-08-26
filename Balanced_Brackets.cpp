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
       stack<char> ch;
       bool ok = true;
       for (int i = 0; i < s.size(); i++)
       {
           if (s[i] == '[' || s[i] == '(' || s[i] == '{')
           {
               ch.push(s[i]);
           }
           else if (s[i] == ']')
           {
               if (ch.empty() || ch.top() != '[')
               {
                   ok = false;
                   break;
               }
               else
               {
                   ch.pop();
               }
           }
           else if (s[i] == ')')
           {
               if (ch.empty() || ch.top() != '(')
               {
                   ok = false;
                   break;
               }
               else
               {
                   ch.pop();
               }
           }
           else if (s[i] == '}')
           {
               if (ch.empty() || ch.top() != '{')
               {
                   ok = false;
                   break;
               }
               else
               {
                   ch.pop();
               }
           }
       }
       if (!ch.empty())
           ok = false;
       if (ok)
           cout << "YES\n";
       else
           cout << "NO\n";
   }
}

