// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n;
//     cin>>n;
//     n--;
//     if(n%3==0)
//     {
//          cout<<"Esteche\n";
        
//     }
//     else
//     {
//        cout<<"Yvens\n";
//     }
// }


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//   ll p,r,g,x;
//   cin>>p>>r>>g>>x;
//    ll tem=min(r,(g*x));
//   ll ans=(p*tem);
//   cout<<ans<<endl;
// }


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll x1,y1,x2,y2,x3,y3,x4,y4;
//     cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

//     double ab=sqrt((abs(x2-x1)*abs(x2-x1)+abs(y2-y1)*abs(y2-y1)));
//     double ad=sqrt((abs(x1-x4)*abs(x1-x4)+abs(y1-y4)*abs(y1-y4)));

//     double bc=sqrt((abs(x3-x2)*abs(x3-x2)+abs(y3-y2)*abs(y3-y2)));
//     double cd=sqrt((abs(x4-x3)*abs(x4-x3)+abs(y4-y3)*abs(y4-y3)));

//     double ac=sqrt((abs(x1-x3)*abs(x1-x3)+abs(y1-y3)*abs(y1-y3)));
//     double bd=sqrt((abs(x2-x4)*abs(x2-x4)+abs(y2-y4)*abs(y2-y4)));

//     // double d=(double(sqrt(2))*ab);

//     if((ab==ad)&&(ad==bc)&&(bc==cd)&&ac==bd)
//     {
//         cout<<"SIM\n";
//     }
//     else{
//         cout<<"NAO\n";
//     }
// }


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k;
    cin >> k;
    string s;
    cin >> s;
    string ans = "tamocompetindo";

    bool flag = false;

    for (int i = 0; i < s.size(); i++)
    {
        int miss = 0;
        for (int j = 0; j < ans.size(); j++) 
        {
            if (s[i + j] != ans[j]) 
            {
                miss++;
            }
        }
        if (miss <= k)
        {
            flag = true;
            break;
        }
    }

    if (flag) 
    {
        cout << "SIM\n";
    } 
    else 
    {
        cout << "NAO\n";
    }

    return 0;
}
