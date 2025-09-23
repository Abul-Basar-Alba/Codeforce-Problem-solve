/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    //int x4=x3+x1-x2;
    int x4=x3+(x2-x1);
    //int y4=y3+y1-y2;
    int y4=y3+(y2-y1);
    cout << x4 << " " << y4 << endl;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int x4, y4;

    if (x1 == x2) {
        x4 = (x3 != x1) ? x3 : x2;
    } else {
        x4 = (x1 != x2) ? x1 : x3;
    }

    if (y1 == y2) {
        y4 = (y3 != y1) ? y3 : y2;
    } else {
        y4 = (y1 != y2) ? y1 : y3;
    }

    cout << x4 << " " << y4 << endl;
    return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
const double PI = M_PI;
int main()
{
    int t;
    cin >> t;

    for (int i= 1;i<=t;i++)
    {
        double radius;
        cin >> radius;
        double sideLength = 2 * radius;
        double areaSquare = sideLength * sideLength;
        double areaCircle = PI * radius * radius;
        double shadedArea = areaSquare - areaCircle;
        cout << "Case " <<i<< ": " <<fixed <<setprecision(2)<<shadedArea<<endl;
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int x4, y4;

    if (x1 == x2)
    {
        x4 = x3;
        if (y1 == y3)
        {
            y4 = y2;
        }
        else
        {
            y4 = y1;
        }
    }
    else if (x1 == x3)
    {
        x4 = x2;
        if (y1 == y2)
        {
            y4 = y3;
        }
       else
        {
            y4 = y1;
        }
    }
    else
    {
        x4 = x1;
        if (y1 == y2)
        {
            y4 = y3;
        }
       else
        {
            y4 = y2;
        }
    }

    cout << x4 << " " << y4 << endl;
    return 0;
}
