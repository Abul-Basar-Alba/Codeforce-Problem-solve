#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<4;i++)
    {
       int x;
       cin>>x;
       v.push_back(x);
    }
    string s;
    cin>>s;
    int sum=0;
    for(char c:s)
    {
        int ind=c-'1';
        sum+=v[ind];
    }
    cout<<sum<<endl;

}
/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    string s;
    cin >> s;
    int sum = 0;
    for (char c : s) {
        int idx = c - '1'; // Convert character to integer index (0-based)
        sum += v[idx];
    }
    cout << sum << endl;
    return 0;
}*/

