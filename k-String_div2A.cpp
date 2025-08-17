#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    int len=s.size();
    map<char,int>cn;
    for(auto it : s)
    {
        cn[it]++;
    }
    if(len%k!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(auto c: cn)
        {
            if (c.second % k != 0)
             {
            cout << -1 << endl;
            return 0;
             }
        }
        string str="";
        for(auto c: cn)
        {
            str+=string(c.second/k,c.first);
        }
        for(int i=0;i<k;i++)
        {
            cout<<str;
        }
       cout<<endl;
    }

}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;

    int len = s.size();
    map<char, int> cn;

    for (auto it : s)
    {
        cn[it]++;
    }

    for (auto c : cn)
    {
        if (c.second % k != 0)
         {
            cout << -1 << endl;
            return 0;
        }
    }

    string result = "";
    for (auto c : cn)
    {
        result += string(c.second / k, c.first);
    }

    for (int i = 0; i < k; i++)
    {
        cout << result;
    }

    cout << endl;

    return 0;
}*/

