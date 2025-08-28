#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+4];
    int sum=0;
    int c1=0,c2=0,c3=0,c4=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
            c1++;
        if(ar[i]==2)
            c2++;
        if(ar[i]==3)
            c3++;
        if(ar[i]==4)
            c4++;
    }
    sum=c4;
    while(c1!=0&&c3!=0)
    {
        c1=c1-1;
        c3=c3-1;
        sum+=1;
    }
    if(c1==0&&c3!=0)
    {
        sum+=c3;
        c3=0;
    }
    sum=sum+(c2/2);
    if(c2%2!=0)
    {
        if(c1<=2)
        {
            sum+=1;
            c1=0;
            c2=0;
        }
        else
        {
            c1=c1-2;
            sum+=1;
            c2=0;
        }
    }
    if(c1!=0)
    {
    sum=sum+(c1/4);
    if(c1%4!=0)
    {
        sum+=1;
    }
    }
    cout<<sum;
}
