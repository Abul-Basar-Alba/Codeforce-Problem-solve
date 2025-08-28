// #include<bits/stdc++.h>
// using namespace std;
// void _honoi(int n,char sec,char aux,char dest)
// {
//     if(n==1)
//     {
//         cout<<sec<<" to "<<dest<<endl;
//     }
//     else
//     {
//         _honoi(n-1,sec,dest,aux);
//         cout<<sec<<" to "<<dest<<endl;
//         _honoi(n-1,aux,sec,dest);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     //char A,B,C;
//     _honoi(n,'A','B','C');

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;


// int quickSortProcess(int *arr, int beg, int end) {
//     int left = beg, right = end, loc = beg;
//     while (true) {
//         while (arr[loc] <= arr[right] && loc != right) {
//             right--;
//         } if (loc == right) return loc;
//         if (arr[loc] > arr[right]) {
//             swap(arr[loc], arr[right]);
//             loc = right;
//         }

//         while (arr[loc] >= arr[left] && loc != left) {
//             left++;
//         } if (loc == left) return loc;
//         if (arr[loc] < arr[left]) {
//             swap(arr[loc], arr[left]);
//             loc = left;
//         }
//     }
// }

// void quickSort(int *arr, int beg, int end) {
//     stack<int> lower, upper;
//     lower.push(beg);
//     upper.push(end);
//     while (!lower.empty()) {
//         int loc = quickSortProcess(arr, lower.top(), upper.top());
//         beg = lower.top(), end = upper.top();
//         lower.pop(), upper.pop();
//         if (loc + 1 < end) {
//             lower.push(loc+1);
//             upper.push(end);
//         } if (beg < loc - 1 ) {
//             lower.push(beg);
//             upper.push(loc - 1);
//         }
//     }
// }

// int main() {
//     int arr[] = {44, 33, -15, 55, 77, 90, 40, 60, 99, 22, 88, 66};
//     quickSort(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1);

//     cout << "And the sorted array is : " << "\n";
//     for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
//         cout << arr[i] << " ";
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int _quick(vector<int> &v, int lo, int hi)
// {
//     int pivot = v[lo], sval = lo;
//     while (lo <= hi)
//     {
//         while (lo <= hi && v[lo] <= pivot)
//             lo++;
//         while (lo <= hi && v[hi] > pivot)
//             hi--;
//         if (lo < hi)
//             swap(v[lo], v[hi]);
//     }
//     swap(v[sval], v[hi]);
//     return hi;
// }

// void _quicksort(vector<int> &v, int n)
// {
//     stack<pair<int, int>> st;
//     st.push({0, n - 1});
//     while (!st.empty())
//     {
//         int lo = st.top().first;
//         int hi = st.top().second;
//         st.pop();
//         int mid = _quick(v, lo, hi);

//         if (mid - 1 > lo)
//             st.push({lo, mid - 1});
//         if (mid + 1 < hi)
//             st.push({mid + 1, hi});
//     }
// }

// int main(void)
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     _quicksort(v, n);
//     for (int i = 0; i < n; i++)
//         cout << v[i] << " ";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int fibonacci(int n) {
//     if (n <= 1)
//         return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Sequence: ";
//     for (int i = 0; i < n; i++) {
//         cout << fibonacci(i) << " ";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// struct info
// {
//     int n;
//     char src, aux, dest;
//     info(int num, char source, char auxilary, char destination)
//     {
//         n = num;
//         src = source;
//         aux = auxilary;
//         dest = destination;
//     }
// };
// void _hanoi(int _n, char src, char aux, char dest)
// {
//     stack<info> st;
//     info tp(_n, src, aux, dest);
//     st.push(tp);
//     while (!st.empty())
//     {
//         info tmp = st.top();
//         st.pop();
//         if (tmp.n == 1)
//         {
//             cout << tmp.src << " to " << tmp.dest << "\n";
//         }
//         else
//         {
//             info third(tmp.n - 1, tmp.aux, tmp.src, tmp.dest);
//             st.push(third);

//             info two(1, tmp.src, tmp.aux, tmp.dest);
//             st.push(two);

//             info one(tmp.n - 1, tmp.src, tmp.dest, tmp.aux);
//             st.push(one);
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     _hanoi(n, 'A', 'B', 'C');
//     return 0;
// }


// Quick short using recursion 

#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high) 
{
    int pivot = a[high];  // Choose the last element as the pivot
    int i = low - 1;      // Index of the smaller element

    for (int j = low; j < high; j++) 
    {
        if (a[j] < pivot) 
        {
            i++;  // Increment index of smaller element
            swap(a[i], a[j]);
        }
    }

    // Place the pivot in the correct position
    swap(a[i + 1], a[high]);
    return i + 1;  // Return the partition point
}

void quicksort(int a[], int low, int high) 
{
    if (low < high) 
    {
        // Find the partition index
        int pi = partition(a, low, high);

        // Recursively sort the two subarrays
        quicksort(a, low, pi - 1);  // Sort the left subarray
        quicksort(a, pi + 1, high); // Sort the right subarray
    }
}

int main() {
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(a) / sizeof(a[0]);

    quicksort(a, 0, n - 1);  // Call quicksort

    // Print the sorted array
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int facturial(int n)
// {
//     if(n==0)
//     return 1;
//     return n*facturial(n-1);
// }
// int main()
// {
//  int n=5;
//  int res=facturial(n);
//  cout<<res<<endl;
// }



