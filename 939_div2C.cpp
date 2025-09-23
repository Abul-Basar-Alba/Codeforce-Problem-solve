#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> operations;
        int sum = 0;

        // Type 1 operations
        for (int i = 0; i < n; ++i) {
            vector<int> op = {1, i + 1};
            for (int j = 1; j <= n; ++j) {
                op.push_back(j);
                sum += j;
            }
            operations.push_back(op);
        }

        // Type 2 operations
        for (int i = 0; i < n; ++i) {
            vector<int> op = {2, i + 1};
            for (int j = 1; j <= n; ++j) {
                op.push_back(j);
            }
            operations.push_back(op);
        }

        cout << sum << " " << 2*n << endl;
        for (const auto& op : operations) {
            for (int i = 0; i < op.size(); ++i) {
                cout << op[i];
                if (i < op.size() - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
