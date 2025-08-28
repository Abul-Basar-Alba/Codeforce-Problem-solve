#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int con[8]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        con[x]++;
    }
    if(con[5]==0&&con[7]==0&&con[2]>=con[4]&&con[1]==con[4]+con[6]&&con[2]+con[3]==con[4]+con[6])
    {
        for(int i=0;i<con[4];i++)
        {
            cout<<"1 2 4\n";
        }
        con[2]=con[2]-con[4];
        for(int i=0;i<con[2];i++)
            cout<<"1 2 6\n";
        for(int i=0;i<con[3];i++)
            cout<<"1 3 6\n";
    }
    else
        cout<<-1<<endl;
}
