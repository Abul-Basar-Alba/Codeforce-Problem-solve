/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int c=0;
        while(1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==b[i])
                    c++;
            }
            if(c==n)
            {
                cout<<"YES\n";
                break;
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    if(a[i-1]<a[i]&&a[i]>a[i+1])
                        swap(a[i],a[i+1]);
                    else
                    {
                        int cn=0;
                        for(int i=0;i<n;i++)
                        {
                            if(a[i]==b[i])
                                cn++;
                        }
                        if(cn==n)
                        {
                            cout<<"YES\n";
                            break;
                        }
                    }
                }
                cout<<"NO\n";
                break;
            }
        }
    }
}*/
/*#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void sortPermutation(vector<int>& arr) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 1; i < arr.size() - 1; ++i) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> permutation(n);

        for (int i = 0; i < n; ++i) {
            cin >> permutation[i];
        }

        if (isSorted(permutation)) {
            cout << "YES\n";
        } else {
            sortPermutation(permutation);
            if (isSorted(permutation)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}*/
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//        string s;
//        cin >> s;
//
//        int count_AB = 0, count_BA = 0;
//
//        for (int i = 0; i < n - 1; ++i) {
//            if (s[i] == 'A' && s[i + 1] == 'B') {
//                count_AB++;
//            } else if (s[i] == 'B' && s[i + 1] == 'A') {
//                count_BA++;
//            }
//        }
//
//        int min_count = min(count_AB, count_BA);
//        cout << min_count << endl;
//    }
//
//    return 0;
//}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {44, 33, 11, 55, 77, 90, 40, 60, 99, 22, 88, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    int v[2 * n];  // পর্যাপ্ত জায়গা দিতে ভেক্টরের সাইজ ডাবল করা হলো।
    int top = -1;

    int l = 0, r = n - 1;
    v[++top] = l;   // Top ইনডেক্সে প্রথম ল যুক্ত করা হলো।
    v[++top] = r;   // Top ইনডেক্সে এরপর R যুক্ত হলো।

    while (top >= 0)
    {
        r = v[top--];  // শেষ মানটা প্রথমে পপ করা হচ্ছে।
        l = v[top--];  // দ্বিতীয় মানটা পপ করা হচ্ছে।

        int pivot = arr[r];
        int i = l - 1;

        for (int j = l; j < r; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[r]);

        int pivotIndex = i + 1;

        if (pivotIndex - 1 > l)
        {
            v[++top] = l;
            v[++top] = pivotIndex - 1;
        }

        if (pivotIndex + 1 < r)
        {
            v[++top] = pivotIndex + 1;
            v[++top] = r;
        }
    }

    cout << "Sorted array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
