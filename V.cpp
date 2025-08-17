/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int K;
    cin >> K;
    int h= 21;
    int m= 0;
    int eh=h+(K+m)/60;
    int em=(K+m)%60;
    printf("%02d:%02d\n",eh, em);
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int l,r;
    cin>>l>>r;
    int mx=0,ans=l;
    for(int i=l;i<=r;i++)
    {
        string num= to_string(i);
        sort(num.begin(),num.end());
        int cur=num[num.length()-1]-num[0];
        if(cur>mx)
        {
            mx=cur;
            ans=i;
        }
        if(mx==9)
        break;
    }
    cout<<ans<<endl;
    }
}



