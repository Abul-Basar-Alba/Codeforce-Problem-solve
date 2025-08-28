#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+3];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int g=sum/100;
    if(g%2!=0)
    {
        cout<<"NO\n";
        //continue;
    }
    else{
    int on=0;
    int tw=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==100)
            on++;
        else
            tw++;
    }
    if((on==tw)||(on==2*tw))
        cout<<"YES\n";
    else if((on%2==0&&tw==0)||(tw%2==0&&on==0)||(on%2==0&&(tw%2==0||on>0)))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    int sum = 0, count_100 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 100)
            count_100++;
    }

    int count_200 = n - count_100; // Calculate count of 200-gram apples

    if (sum % 200 == 0 && count_100 % 2 == 0 && (count_200 % 2 == 0 || count_100 > 0))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}*/
