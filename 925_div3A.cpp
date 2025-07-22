/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==3)
        {
            cout<<"aaa"<<endl;
            continue;
        }
        string s="";
        map<int, char>mp;

     for (int i = 1;i<= 26;i++)
    {
        mp[i] = 'a' + i - 1;
    }
   int c=0;
   if(n>27)
   {
   for(int i=1;i<=3;i++)
   {
       s.push_back('z');
       n-=26;
       c++;
       if(n<=26)
        break;
   }
   }
   if(n<=27&&c==0)
   {
     s.push_back('a');
     n-=1;
     s.push_back('a');
     n-=1;
      for (const auto& i : mp)
    {
        if(i.first==n)
        s.push_back(i.second);
    }
   }
   else if(n<=26&&c==1)
    {
        s.push_back('a');
        n-=1;
        for (const auto& i : mp)
    {
        if(i.first==n)
        s.push_back(i.second);
    }
    }
    else if(n<=26&&c==2)
    {
       for (const auto& i : mp)
    {
        if(i.first==n)
        s.push_back(i.second);
    }
    }
    sort(s.begin(),s.end());
     cout<<s<<endl;
    }
}
*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n <= 27)
        {
            string s = "";
            for(int i = 0; i < min(n, 2LL); ++i)
                s += 'a';
            if(n <= 2)
                cout << s << endl;
            else
                cout << s << char('a' + (n - 1) % 26) << endl;
        }
        else
        {
            ll quotient = (n - 3) / 26;
            ll remainder = (n - 3) % 26;
            string s = string(quotient, 'z') + "aa";
            if(remainder > 0)
                s += char('a' + remainder);
            cout << s << endl;
        }
    }
    return 0;
}
