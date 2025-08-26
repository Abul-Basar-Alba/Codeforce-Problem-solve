#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=0,f=0;
    string ok="YES";
   while(n--)
    {
        int a;
        cin>>a;
        if(a==25)
            t++;
        else if(a==50)
        {
            if(t>=1)
            {
                t--;
                f++;
            }
            else
                ok="NO";
        }
        else if(a==100)
        {
            if(t>=1&&f>=1)
            {
                t--;
                f--;
            }
            else if(t>=3&&f==0)
            {
                t=t-3;
            }
            else
                ok="NO";
        }
    }
  cout<<ok<<endl;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> bills(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> bills[i];
    }

    int change25 = 0, change50 = 0;

    for (int i = 0; i < n; ++i)
    {
        if (bills[i] == 25)
        {
            change25++;
        }
    else if (bills[i] == 50)
        {
            if (change25 >= 1)
            {
                change25--;
                change50++;
            }
           else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else
            { // bills[i] == 100
            if (change50 >= 1 && change25 >= 1)
            {
                change50--;
                change25--;
            }
           else if (change25 >= 3)
            {
                change25 -= 3;
            }
           else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}*/

