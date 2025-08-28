#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;
const double PI = 3.14159265358979323846;

int main() {
    int N;
    cin >> N;
    
    int low = 1, high = N;
    string response;
    
    while (low < high) {
        int mid = (low + high) / 2;
        cout << "? " << mid;
        for (int i = 1; i <= mid; i++) {
            cout << " " << i;
        }
        cout << endl;
        cin >> response;
        if (response == "Kaboom") {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    int x = low;
    
    low = 1;
    high = x - 1;
    while (low < high) {
        int mid2 = (low + high) / 2;
        cout << "? " << mid2 + 1;
        for (int i = 1; i <= mid2; i++) {
            cout << " " << i;
        }
        cout << " " << x << endl;
        cin >> response;
        if (response == "Kaboom") {
            high = mid2;
        } else {
            low = mid2 + 1;
        }
    }
    int y = low;
    
    cout << "! " << y << " " << x << endl;
    
    return 0;
}