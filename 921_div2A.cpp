#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s="";
        int c=0;
        for(char i='a';i<='z';i++)
        {

                s.push_back(i);
            c++;
            if(c==k)
                break;
        }
        string sr="";
        for(int j=0;j<n;j++)
        {
            sr+=s;
        }
        cout<<sr<<endl;
    }
    //cout<<<<endl;
}
