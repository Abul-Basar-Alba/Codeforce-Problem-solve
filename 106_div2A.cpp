#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    //int a[12+1];
    vector<int>v(12);
    for(int i=0;i<12;i++)
    {
        cin>>v[i];
    }
    //sort(a,a+12);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int sum=0,c=0;
    for(int i=0;i<12;i++)
    {
        sum+=v[i];
        c++;
        if(sum>=k)
        {
            break;
        }
    }
    if(k==0)
        cout<<0<<endl;
    else if(sum<k)
        cout<<-1<<endl;
    else
        cout<<c<<endl;
}
