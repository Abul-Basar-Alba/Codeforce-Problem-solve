#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
   ll n;
   cin>>n;
  string s="";
  while(n>0&&n%7!=0)
  {
      n-=4;
      s.push_back('4');
  }
  while(n>0&&n%7==0)
  {
      n-=7;
      s.push_back('7');
  }
  if(n==0)
    cout<<s<<endl;
  else
    cout<<-1<<endl;

    return 0;
}

