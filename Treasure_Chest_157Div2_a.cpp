/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(x+k==y)
            cout<<y<<endl;
        else if(x>y)
            cout<<x<<endl;
        else if(x+k>y)
        {
            int tem=(x+k)-y;
            cout<<x+k-tem<<endl;
        }
        else
        {
           int tem=y-(x+k);
           tem=tem+tem;
           cout<<x+k+tem<<endl;
        }
    }
}*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define a pair of integers to represent a point (x, y)
typedef pair<int, int> Point;

// Function to calculate the distance between two points
int calculateDistance(Point p1, Point p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of points

        vector<Point> points(n);

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            points[i] = make_pair(x, y);
        }

        // Sort the points by x-coordinate and then by y-coordinate
        sort(points.begin(), points.end());

        // Initialize variables to keep track of the current position and path length
        Point currentPosition = points[0];
        int pathLength = 0;

        // Create a vector to store the path
        vector<Point> path;

        // Iterate through the sorted points to find the minimum path
        for (int i = 1; i < n; i++) {
            Point nextPoint = points[i];

            // Calculate the distance from the current position to the next point
            int distance = calculateDistance(currentPosition, nextPoint);

            // Update the current position and path length
            currentPosition = nextPoint;
            pathLength += distance;

            // Add the current point to
                // Output the minimum path length
    cout << pathLength << endl;

    // Output the points in the path
    for (int i = 0; i < path.size(); i++) {
        cout << path[i].first << " " << path[i].second << endl;
    }
}
 }
 return 0;
}


