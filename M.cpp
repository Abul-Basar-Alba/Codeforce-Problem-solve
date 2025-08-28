#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    set<char>d;

    for(char it:s)
    {
        d.insert(it);
    }

    for (char i='0';i<='9';i++)
    {
        if (d.find(i) == d.end())
        {
         cout<<i<<endl;
            break;
        }
    }

}

