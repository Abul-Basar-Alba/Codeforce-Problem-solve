/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x=n+abs((n-1)/(m-1));
    cout<<x<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; m*i<=n; i++)
        n++;
    cout<<n<<endl;
}
