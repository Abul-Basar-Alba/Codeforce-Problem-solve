#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<int,int>faq;
        for(auto it:v)
        {
            faq[it]++;
        }
        vector<int>s;
        for(auto it:faq)
        {
            if(it.second>=2)
                s.push_back(it.first);
        }
            if(s.size()<2)
                cout<<-1<<endl;
            else
            {
                vector<int>b;
                bool ok1=false,ok2=false;
                for(auto it:v)
                {
                    if(it==s[0])
                    {
                        b.push_back(ok1 ? 2:1);
                        ok1=true;
                    }
                    else if(it==s[1])
                    {
                        b.push_back(ok2 ? 3:1);
                        ok2=true;
                    }
                    else
                        b.push_back(1);
                }
                for(auto it:b)
                {
                    if(it>0)cout<<it<<" ";
                }
                cout<<endl;
            }
    }
}
