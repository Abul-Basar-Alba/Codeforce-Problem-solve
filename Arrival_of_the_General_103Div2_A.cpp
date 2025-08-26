#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    /*int a[t],mx=0,mn=101,mxi=0,mni=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            mxi=i;
        }
        if(a[i]<=mn)
        {
            mn=a[i];
            mni=i;
        }
    }
    //int sum=;
    if(mxi>mni)
    {
        mni++;
    }
    cout<<mxi+(t-1)-mni<<endl;*/
    vector<int>v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
        v.push_back(i);
    }
    int max=*max_element(v.begin(),v.end());
    int min=*min_element(v.begin(),v.end());
        int tem1=0,tem2=0;
        for(int i=0;i<t;i++)
        {
            if(v[i]==max)
            {
              tem1=i;
            }
            if(v[i]==min)
            {
             tem2=i;
            }
        }
        if(tem1>tem2)
        {
            tem2+=1;
        }
        cout<<tem1+(t-1)-tem2;
}
