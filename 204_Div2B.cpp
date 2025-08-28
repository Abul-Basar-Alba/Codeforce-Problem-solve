#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int n;
    cin >> n;

    unordered_map<int, vector<int>>pos;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        pos[num].push_back(i + 1); // Adding 1 to convert from 0-based index to 1-based index
    }

    vector<pair<int, int>> result;

    for (auto &it: pos)
    {
        int value = it.first;
        vector<int> &indices = it.second;

        if (indices.size() == 1)
        {
            // If the value occurs only once, px is 0
            result.push_back({value, 0});
        }
        else
        {
            // Check if indices form an arithmetic progression
            int comDf= indices[1] - indices[0];
            bool isAP= true;

            for (int i = 2; i < indices.size(); ++i)
            {
                if (indices[i] - indices[i - 1] != comDf)
                {
                    isAP = false;
                    break;
                }
            }

            if (isAP)
            {
                result.push_back({value,comDf});
            }
        }
    }

    // Sort the result in increasing order of x
    sort(result.begin(), result.end());

    // Print the result
    cout << result.size() << endl;
    for (auto &entry : result)
    {
        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}

