/*#include<bits/stdc++.h>
#define ll unsigned ll int
using namespace std;
int main()
{
    string a,b;
    cin >>a>>b;
    ll A= stoll(a);
    ll B= stoll(b);
    ll result =__gcd(A,B);
    cout<<result<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if ((b - a)==1||a==1&&b==10)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}

