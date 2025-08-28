#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s= to_string(n% 100);
    if (s.length() == 1)
    {
        s= "0" +s;
    }
    cout <<s<< endl;

}
