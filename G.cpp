/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,m,p,d=0;
    cin>>n>>m>>p;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s =min(a[0],a[n-1]);
    ll b[m];
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int l =min(b[0],b[m-1]);
    ll sum=abs(s-l)+abs(l-p);
    ll rem;
        for(int j=0;j<m;j++)
        {
             rem=abs(a[i]-b[j])+abs(b[j]-p);
            if(rem>sum)
            {
                d++;
            }
        }
    if(d==0)
    cout<<sum;
    else
    cout<<rem;

}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
string GCD(string a, string b)
{
    if (b.substr(0, a.size()) == a)
    {
        return a;
    }
    else
    {
        ll A=stoll(a);
        ll B=stoll(b);
        ll ans=__gcd(A,B);
        string result = to_string(ans);
        return result;
    }
    return "1";
}
int main()
{
    string a,b;
    cin>>a>>b;
    string result=GCD(a,b);
    cout<<result<<endl;
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

string findGCD(string a, string b) {
    while (b != "0") {
        string temp = a;
        a = b;
        b = temp;
        while (a.size() >= b.size()) {
            if (a.substr(0, b.size()) == b) {
                a = a.substr(b.size());
            } else {
                return "1"; // If 'a' doesn't divide 'b', GCD is 1
            }
        }
    }
    return a; // GCD is 'a'
}

int main() {
    string a, b;
    cin >> a >> b;
    string result = findGCD(a, b);
    cout << result << endl;
    return 0;
}*/
