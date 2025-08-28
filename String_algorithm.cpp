#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string to number convert

    /*string s="763";
    int n=0;
    for(int i=0;i<s.size();i++)
    {
        int ch=s[i]-'0';
         n=(n*10)+ch;
    }
    cout<<n<<endl;
    int c=stoi(s);//string to number convert bilting function
    cout<<c<<endl;*/

    // number to string

    int n=3378;
    string s="";
    while(n!=0)
    {
        int r=n%10;
          r=r+'0';
        s+=r;
        n/=10;

    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
   string a=to_string(n);
    cout<<s<<endl;
}
