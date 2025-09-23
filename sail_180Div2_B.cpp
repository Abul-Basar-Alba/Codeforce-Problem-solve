/*#include <iostream>
using namespace std;
int main()
{
    int t,sx,sy,ex,ey;
    cin >> t >> sx >> sy >> ex >> ey;

    string wind;
    cin >> wind;

    int x = sx, y = sy;
    for (int i = 0; i < t; ++i)
    {
        // Move the boat based on wind direction
        if (x < ex && wind[i] == 'E')
        {
            x++;
        }
    else if (x > ex && wind[i] == 'W')
        {
            x--;
        }
    else if (y < ey && wind[i] == 'N')
        {
            y++;
        }
    else if (y > ey && wind[i] == 'S')
        {
            y--;
        }

        // Check if the destination is reached before time t
        if (x == ex && y == ey)
        {
            cout << i + 1 << endl; // Output the earliest time
            return 0;
        }
    }

    // If destination not reached within time t
    cout << -1 << endl;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    int x=sx,y=sy;
    for(int i=0;i<t;i++)
    {
        if(x<ex&&s[i]=='E')
            x++;
        else if(x>ex&&s[i]=='W')
            x--;
        else if(y<ey&&s[i]=='N')
            y++;
        else if(y>ey&&s[i]=='S')
            y--;

        if(x==ex&&y==ey)
        {
           cout<<i+1<<endl;
           return 0;
        }
    }
    cout<<-1<<endl;
}*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> g(5, vector<int>(5));

    // Input the matrix representing happiness gained by each pair of students

    vector<int> students = {1, 2, 3, 4, 5}; // Students 1 to 5
    int maxTotalHappiness = 0;

    do {
        // Happiness gained by communicating pairs of students
        int totalHappiness = 0;
        totalHappiness += g[students[0] - 1][students[1] - 1] + g[students[1] - 1][students[0] - 1];
        totalHappiness += g[students[2] - 1][students[3] - 1] + g[students[3] - 1][students[2] - 1];
        totalHappiness += g[students[1] - 1][students[2] - 1] + g[students[2] - 1][students[1] - 1];
        totalHappiness += g[students[3] - 1][students[4] - 1] + g[students[4] - 1][students[3] - 1];

        maxTotalHappiness = max(maxTotalHappiness, totalHappiness);
    } while (next_permutation(students.begin(), students.end()));

    cout << "Maximum total happiness: " << maxTotalHappiness << endl;

    return 0;
}


