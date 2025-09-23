#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++)
    {
        cin>>s;
          if(s=="abc"||s=="cba"||s=="acb"||s=="bac")
          {
              cout<<"YES"<<endl;
          }
          else
            cout<<"NO"<<endl;
    }
}
