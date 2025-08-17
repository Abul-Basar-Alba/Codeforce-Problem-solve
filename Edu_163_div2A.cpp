#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        if(n%2!=0)
        cout<<"NO\n";
        else{
                cout<<"YES\n";
               n/=2;
            for(int i=0;i<n;i++)
            {

              if(i%2==0)
              {
              cout<<"AA";
              }
              else
               cout<<"BB";

            }

            cout<<endl;
        }

    }
}
