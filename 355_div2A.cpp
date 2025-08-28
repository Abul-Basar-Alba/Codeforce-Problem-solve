#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
            c++;
    }
    cout<<(n-c)+2*c<<endl;
}
