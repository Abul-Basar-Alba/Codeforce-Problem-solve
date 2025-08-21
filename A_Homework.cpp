#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n, m;
    string a, b, c;
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> c;

    deque<char> dq; 
    
    for (char ch : a) 
    dq.push_back(ch);

    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'V')
        {
            dq.push_front(b[i]);
        }
        else
        {
            dq.push_back(b[i]);
        }
    }

    string res;
    for (char ch : dq) 
    res.push_back(ch);

    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}
