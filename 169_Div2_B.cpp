#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    vector<int>a(26,0);
    for(int i=0;i<n;i++)
        a[s[i]-'a']++;
    for(int i=0;i<26;i++)
        if(a[i]%2!=0)
          cnt++;
    if(!cnt||cnt%2!=0)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
}
