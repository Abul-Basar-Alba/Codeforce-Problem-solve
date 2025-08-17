#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         stack<int>small,capital;
        string sr;
        cin>>sr;
        for(int i=0;i<sr.size();i++)
        {
            if(sr[i]>='A'&&sr[i]<='Z'&&sr[i]!='B')
                capital.push(i);
            if(sr[i]>='a'&&sr[i]<='z'&&sr[i]!='b')
                small.push(i);
            if(sr[i]=='B'&&!capital.empty())
            {
                sr[capital.top()]='0';
                capital.pop();
            }
            if(sr[i]=='b'&&!small.empty())
            {
                sr[small.top()]='0';
                small.pop();
            }
        }
        for(int i=0;i<sr.size();i++)
        {
            if(sr[i]!='B'&sr[i]!='b'&sr[i]!='0')
                cout<<sr[i];
        }
        cout<<endl;
    }
}
