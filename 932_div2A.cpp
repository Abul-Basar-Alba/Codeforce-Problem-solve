/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {


    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s.size()% 4 != 0)
        cout << s << endl;
    else if (s.size()% 4 == 0)
    {
        string s1 = s;
        reverse(s.begin(), s.end());
        string rev = s + s1;
        cout << rev << endl;
    }
    }
    return 0;
}*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to apply the operation of adding the reversed string to the end
string addReversedString(const string& s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return s + reversed;
}

// Function to apply the operation of reversing the string
string reverseString(const string& s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to find the lexicographically smallest string after n operations
string findSmallestString(int n, const string& s) {
    if (n % 2 == 0) {
        return s; // If the number of operations is even, the result will be the same as the input string
    } else {
        string reversed = reverseString(s);
        return addReversedString(reversed);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string result = findSmallestString(n, s);
        cout << result << endl;
    }

    return 0;
}




