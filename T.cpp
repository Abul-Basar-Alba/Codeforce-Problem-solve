/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
//const int mod= 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    ll result=pow(2,n);
    cout << result << endl;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int t=0,a=0;
    for (int i=0;i<X;i++)
    {
        if(i%(A+C)<A)
        {
            t+=B;
        }
        if(i%(D+F)<D)
        {
            a+=E;
        }
    }

    if (t>a)
    {
        cout << "Takahashi\n";
    }
    else if (a>t)
    {
        cout << "Aoki\n";
    }
    else
    {
        cout << "Draw\n";
    }
}

