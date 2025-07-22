//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll x1,y1,x2,y2;
//        cin>>x1>>y1>>x2>>y2;
//        if(x1>y1&&x2>y2||x1<y1&&x2<y2)
//            cout<<"yes\n";
//        else
//            cout<<"no\n";
//
//    }
//}


#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        string a, b;
        cin >> a >> b; // read strings a and b

        int n = a.length();
        int m = b.length();

        // Check if b is already a subsequence of a
        bool subsequenceFound = true;
        for (int i = 0; i < m; ++i) {
            if (a.find(b[i]) == string::npos) {
                subsequenceFound = false;
                break;
            }
        }

        // Calculate the minimum possible length
        if (subsequenceFound) {
            cout << n << endl;
        } else {
            cout << n + m << endl;
        }
    }

    return 0;
}
