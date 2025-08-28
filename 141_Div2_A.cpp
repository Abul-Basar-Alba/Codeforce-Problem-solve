#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    int cn=s.size();
    cout<<4-cn<<endl;

}
