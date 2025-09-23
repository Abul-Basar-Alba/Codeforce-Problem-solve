#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll a,b,c;
    cin>>a>>b;
    c=a+b;
    string a1=to_string(a);
    string b1=to_string(b);
    string c1=to_string(c);

    string a2="";
    string b2="";
    string c2="";
    for(int i=0;i<a1.size();i++)
    {
        if(a1[i]!='0')
            a2.push_back(a1[i]);
    }
    for(int i=0;i<b1.size();i++)
    {
        if(b1[i]!='0')
            b2.push_back(b1[i]);
    }
    for(int i=0;i<c1.size();i++)
    {
        if(c1[i]!='0')
            c2.push_back(c1[i]);
    }
    int a3=stoi(a2);
    int b3=stoi(b2);
    ll c3=stoi(c2);
    ll ans=a3+b3;
    if(ans==c3)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll a, b, c;
    cin >> a >> b;
    c = a + b;

    // Convert a, b, and c to strings
    string a1 = to_string(a);
    string b1 = to_string(b);
    string c1 = to_string(c);

    // Remove zeros from a, b, and c
    string a2 = "", b2 = "", c2 = "";
    for(int i = 0; i < a1.size(); i++) {
        if(a1[i] != '0')
            a2.push_back(a1[i]);
    }
    for(int i = 0; i < b1.size(); i++) {
        if(b1[i] != '0')
            b2.push_back(b1[i]);
    }
    for(int i = 0; i < c1.size(); i++) {
        if(c1[i] != '0')
            c2.push_back(c1[i]);
    }

    // Convert modified strings to integers
    int a3 = stoi(a2);
    int b3 = stoi(b2);
    ll c3 = stoi(c2);

    // Calculate the sum of modified a and b
    ll ans = a3 + b3;

    // Check if the sum equals the modified c
    if(ans == c3)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
*/
