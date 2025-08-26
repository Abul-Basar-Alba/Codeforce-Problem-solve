/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"safety"<<endl;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        k=min(k,60LL);
        ll res=min(n+1LL,(1LL<<k));
        cout<<res<<endl;
    }
}
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> days(N);
    for (int i = 0; i < N; i++) {
        cin >> days[i];
    }

    int repdigitCount = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= days[i]; j++) {
            int month = i + 1;
            int day = j;
            int monthDigit = month % 10;
            int dayDigit = day % 10;
            if (monthDigit == dayDigit) {
                repdigitCount++;
            }
        }
    }

    cout << repdigitCount << endl;

    return 0;
}
