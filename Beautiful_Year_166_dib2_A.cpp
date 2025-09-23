#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    for(int i=0;;i++)
    {
        int s1=0,s2=0,s3=0,s4=0;
        int tem=t+1;
       int rem1=tem%10;
       s1=rem1;
       tem=tem/10;
       int rem2=tem%10;
       s2=rem2;
       tem=tem/10;
       int rem3=tem%10;
       s3=rem3;
       tem=tem/10;
       int rem4=tem%10;
       s4=rem4;
       tem=tem/10;
       if(s1==s2||s1==s3||s1==s4||s2==s3||s2==s4||s3==s4)
          t++;
       else
          break;
    }
    cout<<t+1<<endl;
}
