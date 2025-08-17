/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

string solve(int a, int b)
{

    if ((abs(a - b)) % 2 == 0)
    {
        return "Alice";
    }

    return "Bob";
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        string w=solve(a, b);
        if (w== "Alice")
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}*/

#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if((a+b)%2==0)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}
