#include<bits/stdc++.h>
/*#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll one,two,three;
        if(abs(b-c)%2==0)one=1;
        else one=0;
        if(abs(a-c)%2==0)two=1;
        else two=0;
        if(abs(a-b)%2==0)three=1;
        else three=0;
        cout<<one<<' '<<two<<' '<<three<<endl;
    }
}*/
#include <iostream>

using namespace std;

int main()
{
    int n, cookies, sum = 0, even = 0, odd = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> cookies;
        sum += cookies;
        if (cookies % 2 == 0)
        {
            even++;
        }
       else
        {
            odd++;
        }
    }

    if (sum % 2 == 0)
    {
        cout << even << endl;
    }
    else
    {
        cout << odd << endl;
    }

    return 0;
}
