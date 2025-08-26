#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
   int n;
   cin>>n;
   if(n%2==0)
   {
       ll cn=pow(2,n/2);
       cout<<cn<<endl;
   }
   else if(n%2!=0)
   {
       cout<<0<<endl;
   }
}
