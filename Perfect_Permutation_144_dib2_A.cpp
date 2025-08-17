#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1||n%2!=0)
        cout<<-1<<endl;
    else
    {
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    reverse(v.begin(),v.end());
    for(auto it:v)
        cout<<it<<" ";
    }
}
