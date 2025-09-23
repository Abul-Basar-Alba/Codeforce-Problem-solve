#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define ll ll int
using namespace std;
int main() {
   FAST_IO;
    int n;
   cin>>n;

   vector<string> res = {""};
   while (n--)
   {
      vector<string> temp;
      for(string ii: res){
         temp.push_back("0"+ii);
      }
      reverse(res.begin(), res.end());
      for(string ii:res){
         temp.push_back("1"+ii);
      }
      res = temp;
   }

   for(string ii:res)cout<<ii<<"\n";



}
