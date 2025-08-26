#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len=s1.size();
    vector<string>v;
    for(int i=0;i<len;i++)
    {
        if(s1[i]==s2[i])
            v.push_back("0");
        else
            v.push_back("1");
    }
    //reverse(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it;
    }
}
