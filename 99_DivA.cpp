/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[7+1];
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    int i=0,c=0;
    while(n>0)
    {
        c++;
        n-=a[i%7];
        i++;
        if(n<=0)
            break;
    }
    if(c%7==0)cout<<7<<endl;
    else cout<<c%7<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[7+1];
    int sum=0,c=0;
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    int d=0;
    for(int i=0;;i++)
    {
        sum+=a[i%7];
        c++;
        if(sum>=n)
            break;
        /*if(a[i]==0)
            continue;
        else
        {
            d++;
        }*/
    }
    if(c%7==0)
        cout<<7<<endl;
    else
        cout<<c%7<<endl;
}
