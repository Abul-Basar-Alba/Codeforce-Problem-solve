/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll m,n;
    cin>>m>>n;
    ll sumA=0;
    ll sumB=0;
    ll a[m+2];
    ll b[n+2];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        sumA+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        sumB+=b[i];
    }
    if(sumA==sumB)
        cout<<"TIED"<<endl;
    else if(sumA>sumB)
        cout<<"ALICE"<<endl;
    else
        cout<<"BOB"<<endl;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >>v[i];
        }

        int ans= 0;
        int pos= -1;

        for (int i = 0; i < n;i++)
            {
            if (v[i] == 1)
            {
                if (pos != -1)
                {
                   ans+= i-pos - 1;
                }
                pos= i;
            }
        }

        cout <<ans<< endl;
    }

    return 0;
}
