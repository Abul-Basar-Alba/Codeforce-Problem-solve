/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
ll sum(ll val)
{
    ll res=0;
    while(val!=0)
    {
       res+=val%10;
       val/=10;
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    ll num=0;
    ll cnt=1;
    if(s.size()==1)
    {
        cout<<"0"<<endl;
        return 0;
    }

    for(int i=0;i<s.length();i++)
    {
        num+=s[i]-'0';
    }
    while(num>=10)
    {
        num=sum(num);
        cnt++;
    }
    cout<<cnt<<endl;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

ll sum(ll val)
{
    ll res = 0;
    while (val != 0)
    {
       res += val % 10;
       val /= 10;
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    ll num = stoll(s);
    ll cnt = 0;

    if (num < 10)
    {
        cout << "0" << endl;
        return 0;
    }

    while (num >= 10)
    {
        num = sum(num);
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}

