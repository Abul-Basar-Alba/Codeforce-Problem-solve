#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int even_count = 0;
        int odd_count = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        if (even_count == n || odd_count == n) {
            // If all elements are even or all elements are odd, changing the sign of any element makes the sum even.
            cout << 1 << endl;
        } else {
            // If there are both even and odd elements, the sum is already even.
            cout << 0 << endl;
        }
    }

    return 0;
}


