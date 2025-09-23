#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int minGroups(vector<int>& nums) {
    vector<unordered_set<int>> groups(32);

    for (int num : nums) {
        for (int i = 0; i < 32; ++i) {
            if (num & (1 << i)) {
                groups[i].insert(num);
            }
        }
    }

    int minNumGroups = 0;
    for (int i = 0; i < 32; ++i) {
        if (!groups[i].empty()) {
            ++minNumGroups;
        }
    }

    return minNumGroups;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        cout << minGroups(nums) << endl;
    }

    return 0;
}

