/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
vector<int>visay(100001);
vector<int>peti(1000001);
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n+1);
    for(int i=1,j=n;i<=n,j>=1;i++,j--)
    {
        cin>>vec[i];
        visay[vec[i]]=i;
        peti[vec[i]]=j;
    }
    int m;
    cin>>m;
    ll ansv=0,ansp=0;
    for(int i=1;i<=m;i++)
    {
        int a;
        cin>>a;
        ansv+=visay[a];
        ansp+=peti[a];
    }
    cout<<ansv<<" "<<ansp<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,arr[100001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //int a;
        cin>>a;
        arr[a]=i;
    }
    int m,b;
    cin>>m;
    ll visiya(0),petiya(0);
    while(m--)
    {
        cin>>b;
        visiya+=arr[b];
        petiya+=((n+1)- arr[b]);
    }
    cout<<visiya<<" "<<petiya<<endl;
}
