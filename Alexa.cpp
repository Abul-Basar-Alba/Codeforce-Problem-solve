#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        ll n,d=1;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll b=1+2*i;//n*2+i+d;
            //cin>>a[i];
            //d++;
            cout<<b<<" ";
        }
        cout<<endl;
    }
}
/*#include <iostream>
using namespace std;

// Function to generate the array
void generateArray(int n) {
    int val = 2;
    for (int i = 0; i < n; i++) {
        cout << val << " ";
        val += 2;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        generateArray(n);
    }

    return 0;
}*/

