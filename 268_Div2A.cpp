#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    int p;
    cin>>p;
    while(p--)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int y;
        cin>>y;
        s.insert(y);
    }
    if((s.size())==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}
