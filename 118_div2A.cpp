#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string x1,x2;
        ll p1,p2;
        cin>>x1>>p1;
        cin>>x2>>p2;
        while(x1[x1.size()-1]=='0')
        {
              p1+=1;
              x1.pop_back();
        }
       while(x2[x2.size()-1]=='0')
        {
                x2.pop_back();
                p2+=1;
        }
        if(x1==x2)
        {
            if(p1==p2)
                cout<<'='<<endl;
            else if(p1>p2)
                cout<<'>'<<endl;
            else
                cout<<'<'<<endl;
        }
        else
        {
            ll x=x1.size()+p1;
            ll y=x2.size()+p2;
            if(x==y)
            {
                if(x1>x2)cout<<'>'<<endl;
                else cout<<'<'<<endl;
            }
            else if(x>y)
                cout<<'>'<<endl;
            else
                cout<<'<'<<endl;
        }
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        int a,b;
        cin>>s1>>a;
        cin>>s2>>b;
        while(s1[s1.size()-1]=='0')
        {
            a++;
            s1.pop_back();
        }
        while(s2[s2.size()-1]=='0')
        {
            b++;
            s2.pop_back();
        }
        //cout<<s1<<" "<<s2<<endl;
        if(s1==s2)
        {
            if(a==b)cout<<"="<<endl;
            else if(a>b)cout<<">"<<endl;
            else cout<<"<"<<endl;
        }
        else
        {
            int x=s1.size()+a;
            int y=s2.size()+b;
            if(x==y)
            {
                if(s1>s2)cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
            else if(x>y)cout<<">"<<endl;
            else cout<<"<"<<endl;
        }
    }
}*/
