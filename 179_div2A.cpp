/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<int,int>feq;
    for(auto c:a)
    {
        feq[c]++;
    }
    int sum=0;
    if(feq>=2)
    {
        sum+=feq.second;
    }
    cout<<sum<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    map<int, int> feq;
    int mx=0;
    for(int i = 0; i < n; i++)
    {
      cin >> a[i];
      feq[a[i]]++;
      mx=max(mx,feq[a[i]]);
    }
    if(mx>(n+1)/2)
        cout<<"NO\n";
    else
        cout<<"YES\n";


}
