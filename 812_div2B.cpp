/*#include<bits/stdc++.h>
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
        cin>>n;
        ll a[n+2];
         int mx=0,p=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           if(mx<=a[i])
           {
               mx=a[i];
               p=i;
           }
        }
        if(is_sorted(a,a+n))
        {
            cout<<"YES\n";
            continue;
        }
        ll f=0;
        for(int i=0;i<=p-1;i++)
        {
            if(a[i]>mx||a[i]>a[i+1])
               f=1;
        }
        for(int i=p+1;i<n-1;i++)
        {
            if(a[i]>mx||a[i]<a[i+1])
               f=1;
        }
        if(f==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> permutation(n);
        for (int i = 0; i < n; ++i) {
            permutation[i] = i;
        }

        do {
            bool good = true;
            for (int i = 0; i < n; ++i) {
                int sum = permutation[i] + i;
                int root = sqrt(sum);
                if (root * root != sum) {
                    good = false;
                    break;
                }
            }

            if (good) {
                for (int i = 0; i < n; ++i) {
                    cout << permutation[i] << " ";
                }
                cout << endl;
                break;
            }
        } while (next_permutation(permutation.begin(), permutation.end()));

        if (!good) {
            cout << "-1" << endl;
        }
    }

    return 0;
}*/


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPerfectSquare(int x) {
    int root = sqrt(x);
    return root * root == x;
}

vector<int> constructPermutation(int n) {
    vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (isPerfectSquare(i) || isPerfectSquare(n - 1 - i)) {
            if (isPerfectSquare(i)) {
                result.insert(result.begin(), i);
            }
            if (isPerfectSquare(n - 1 - i)) {
                result.push_back(n - 1 - i);
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> permutation = constructPermutation(n);
        if (permutation.size() == n) {
            for (int num : permutation) {
                cout << num << " ";
            }
            cout << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}

