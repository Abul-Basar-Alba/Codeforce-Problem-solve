#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=(-n);i<=n;i++)
    {
        int space=2*abs(i);
        for(int j=0;j<space;j++)
            cout<<" ";
        int mx=n-abs(i);
        for(int j=0;j<mx;j++)
            cout<<j<<" ";
        for(int j=mx;j>0;j--)
            cout<<j<<" ";

        cout<<0<<endl;
    }
    return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
    int n;  // Adjust the value of 'n' to control the size of the pattern
     cin>>n;
    // Print the top half of the pattern
    for (int i = 0; i <= n; i++)
        {
        // Print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j <= i; j++)
        {
            cout << j << " ";
        }

        // Print decreasing numbers (excluding the last zero)
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    // Print the bottom half of the pattern
    for (int i = n - 1; i >= 0; i--)
        {
        // Print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j <= i; j++)
        {
            cout << j << " ";
        }

        // Print decreasing numbers (excluding the last zero)
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers (excluding the last zero)
        for (int j = i - 1; j >= 0; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers (excluding the last zero)
        for (int j = i - 1; j >= 0; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}
*/


