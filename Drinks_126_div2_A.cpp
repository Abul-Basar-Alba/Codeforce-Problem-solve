
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    double sum = 0.0; // Initialize sum as a double
    double avs;
    vector<int>v(t);
     for(int i=0;i<t;i++)
     {
         cin>>v[i];
         v.push_back(i);
         sum+=v[i];
     }
    avs = sum / double(t); // Perform floating-point division
    cout << setprecision(12) << avs << endl; // Set precision to 12 decimal places

    return 0;
}

