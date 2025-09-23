#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
     map<char,int>mp;
     for(char c:s)
     {
         mp[c]++;
     }
     int od=0;
     for(const auto&it:mp)
     {
         if(it.second%2!=0)
            od++;
     }
     int e=max(od-1,0);
     if(k>=e&&k<=n-1)
        cout<<"YES\n";
     else
         cout<<"NO\n";
    }

}
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        int oddCount = 0;
        for (const auto &it : mp)
        {
            if (it.second % 2 != 0)
            {
                oddCount++;
            }
        }

        // Calculate the number of characters needed to make the string palindrome
        int extraChars = max(oddCount - 1, 0);

        if (k >= extraChars && k <= n - 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}*/

