/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int A[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin >> A[i][j];
        }
    }
    cout <<A[r-1][c-1]<<endl;
}*/
/*#include<bits/stdc++.h>
#define ll unsigned ll int
using namespace std;
const int mod= 1e100;
int main()
{
    ll a,b;
    cin >>a>>b;
    a%=mod;
    b%=mod;
    ll result =__gcd(a,b);
    cout<<result<<endl;
}
*/
#include <bits/stdc++.h>
#define LL unsigned ll
using namespace std;
const int mod= 1e50;
/*LL gcd(LL a, LL b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
*/
int main()
{
    LL num1, num2;
    cin >> num1 >> num2;

    LL result =__gcd(num1, num2);

    cout << (ll)result << endl;
    return 0;
}

