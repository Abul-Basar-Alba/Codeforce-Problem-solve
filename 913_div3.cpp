#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcdefgh";
    int t;
    cin>>t;
    while(t--)
    {
        string sr;
        cin>>sr;
        char ch=sr[0];
        int n=sr[1]-'0';
        for(int i=0;i<8;i++)
        {
            if(s[i]!=ch)
                cout<<s[i]<<n<<endl;
        }
        for(int i=1;i<=8;i++)
        {
            if(n!=i)
                cout<<ch<<i<<endl;
        }
    }
}
