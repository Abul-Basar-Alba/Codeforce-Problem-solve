<<<<<<< HEAD
// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ll x1,y1,x2,y2;
//     cin>>x1>>y1>>x2>>y2;
//     ll a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
//     cout<<x1<<' '<<y1+a<<' '<<x1+a<<' '<<y1;
// }


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) 
    return 0;
    while (t--) 
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
        cin >> a[i];

        map<int,int> freq;
        freq.reserve(n * 2);
        for (int x : a) 
        freq[x]++;

        vector<int> isUnique(n);
        for (int i = 0; i < n; ++i) 
        isUnique[i] = (freq[a[i]] == 1);

        
        int bestL = -1, bestR = -1, bestLen = 0;
        int i = 0;
        while (i < n) 
        {
            if (!isUnique[i]) 
            { 
                i++; 
                continue; 
            }
            int j = i;
            while (j < n && isUnique[j])
            j++;
            int len = j - i;
            if (len > bestLen) 
            {
                bestLen = len;
                bestL = i; bestR = j - 1;
            }
            i = j;
        }

        if (bestLen == 0) 
        {
           
            cout << 0 << '\n';
        } 
        else 
        {
            
            cout << (bestL + 1) << ' ' << (bestR + 1) << '\n';
        }
    }
    return 0;
=======
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<x1<<' '<<y1+a<<' '<<x1+a<<' '<<y1;
>>>>>>> 2d8aa0b7ede4c7b28108de8f85e0af368a114357
}
