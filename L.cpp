/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    if (X <= A)
    {
        cout << fixed << setprecision(12) << 1.0 << endl;
    }
    else if (X > B)
    {
        cout<<fixed << setprecision(12) << 0.0 << endl;
    }
    else
    {
        double prob =(double)(C) / (B - A);
        cout<<fixed<<setprecision(12)<<prob<<endl;
    }

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(10);
    for (int i=0;i<10;i++)
    {
        cin>>v[i];
    }
    int b= 3;
    int c= 0;
    for (int i=0;i<b;i++)
    {
        c=v[c];
    }
    cout<<c<<endl;
}


