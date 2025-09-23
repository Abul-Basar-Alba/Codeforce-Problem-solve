/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int cnt0=0,cnt5=0,actual=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==5)
            cnt5++;
        else
            cnt0++;

        if((cnt5*5)%9==0)//number divisible by 9
            actual=cnt5;
    }
    if(actual!=0&&cnt0>0)// 0 count because number divisible by 90.
    {
        for(int i=0;i<actual;i++)
         cout<<5;
        for(int i=0;i<cnt0;i++)
            cout<<0;
    }
    else if(cnt0>0)
        cout<<0<<endl;
    else
        cout<<-1<<endl;
}*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, f(0), z(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 0)
            z++;
        else if (t == 5)
            f++;
    }

    if (z == 0)
        cout << -1 << endl;
    else if (f < 9)
        cout << 0 << endl;
    else
    {
        f -= f % 9;//
        for (int i = 0; i < f; i++)
            cout << 5;
        for (int i = 0; i < z; i++)
            cout << 0;
    }

    return 0;
}
