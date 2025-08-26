#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string a;
    cin>>a;
    //gets(a);
    int i=0,c=0;
    //while(a[i]!='\0')
    for(int j=1;j<=t;j++)
    {
    for(int i=0;i<(a.size()+1);i++)
    {
        //char tem[]='\0';
        if(a[i]=='B'&&a[i+1]=='G')
        {
           swap(a[i],a[i+1]);
            i++;
            //c++;
        }

    }
    }
    //puts(a);
    cout<<a<<endl;

}
