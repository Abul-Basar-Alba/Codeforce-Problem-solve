/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n],e[n];
        cin>>s[0]>>e[0];
        int count=0;
        for(int i=1;i<n;i++)
        {
            cin>>s[i]>>e[i];
            if(s[i]>=s[0]&&e[i]>=e[0])
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<s[0]<<endl;
        }
        else
            cout<<"-1"<<endl;;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)

    {
         char a[11][11];
         int c1=0,c2=0,c3=0,c4=0,c5=0;
        for(int i=1;i<=10;i++)
        {
            //string s;
            //cin>>s;
            for(int j=1;j<=10;j++)
            {

            cin>>a[i][j];
                if(a[i][j]=='x')
                {
                   // int x=i+1,y=j+1;
                //int tem=ans;
                if(i==1||j==1||i==10||j==10)
                {
                    c1++;
                }
                else if(i==2||j==2||i==9||j==9)
                {
                    c2++;
                }
                else if(i==3||j==3||i==8||j==8)
                {
                    c3++;
                }
                else if(i==4||j==4||i==7||j==7)
                {
                    c4++;
                }
                else if(i==5||j==5||i==6||j==6)
                    c5++;
                }

            }
            //cout<<ans<<endl;
        }
        cout<<c1*1+c2*2+c3*3+c4*4+c5*5<<endl;
    }
}
