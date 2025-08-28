#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        vector<int> cnt(26, 0);
        vector<int> tec(n);
        for (int i = 0; i < n;i++)
        {
            cin >> tec[i];
        }
        for (int i : tec)
        {
            for (int j = 0; j < 26;j++)
            {
                if (cnt[j] == i)
                {
                    s += 'a' + j;
                    cnt[j]++;
                    break;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
