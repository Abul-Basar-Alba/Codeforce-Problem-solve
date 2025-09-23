/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>str;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        str.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(str[i][j]=='-')
                cout<<"-";
            else if((i%2==0&&j%2==0)||(i%2==1&&j%2==1)&&str[i][j]=='.')
                cout<<"B";
            else
            {
                if(str[i][j]=='.')
                    cout<<"W";
            }
        }
        cout<<endl;
    }
}*/
#include <iostream>

int main()
{
    int n = 2;  // Adjust the value of 'n' to control the size of the pattern

    // Print the top half of the pattern
    for (int i = 0; i <= n; i++)
        {
        // Print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            std::cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j <= i; j++)
        {
            std::cout << j << " ";
        }

        // Print decreasing numbers (excluding the last zero)
        for (int j = i - 1; j >= 0; j--)
        {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    // Print the bottom half of the pattern
    for (int i = n - 1; i >= 0; i--)
        {
        // Print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            std::cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j <= i; j++)
        {
            std::cout << j << " ";
        }

        // Print decreasing numbers (excluding the last zero)
        for (int j = i - 1; j >= 0; j--)
        {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}

