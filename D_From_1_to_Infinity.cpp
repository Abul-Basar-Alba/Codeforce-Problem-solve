#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

ll digitSumRange(ll l, ll r) {
    // 1 থেকে r পর্যন্ত সংখ্যাগুলোর digit sum - 1 থেকে l-1 পর্যন্ত digit sum
    auto sumDigitsUpto = [&](ll x) {
        if (x <= 0) return 0LL;
        string s = to_string(x);
        int n = s.size();
        ll res = 0;
        ll prefix = 0;
        for (int i = 0; i < n; i++) {
            int d = s[i] - '0';
            int leftLen = n - i - 1;
            if (d > 0) {
                res += (d * (d - 1) / 2) * (ll)pow(10, leftLen); // ছোট digits এর অবদান
                res += d * prefix * (ll)pow(10, leftLen);        // prefix অংশের অবদান
                res += d * leftLen * 45 * (ll)pow(10, leftLen - 1 < 0 ? 0 : leftLen - 1);
            }
            prefix = prefix * 10 + d;
        }
        res += accumulate(s.begin(), s.end(), 0LL, [](ll a, char c) { return a + (c - '0'); });
        return res;
    };
    return sumDigitsUpto(r) - sumDigitsUpto(l - 1);
}

void Basar() {
    long long k;
    cin >> k;

    // কোন digit group এ পড়ছে সেটা বের করি
    ll len = 1;
    ll cnt = 9;
    ll digits = 9; // 1-digit এ
    while (k > digits * len) {
        k -= digits * len;
        len++;
        digits *= 10;
    }

    // এখন আমরা জানি k-th digit len-digit group এর ভেতর
    ll start = pow(10, len - 1);
    ll numberIndex = (k - 1) / len; // কত নম্বর সংখ্যায় পড়েছে
    ll digitIndex = (k - 1) % len;  // সংখ্যার ভেতরে কোন digit
    ll num = start + numberIndex;

    // num পর্যন্ত digit sum
    ll totalSum = 0;

    // 1 থেকে num-1 পর্যন্ত সব digit sum
    for (ll d = 1; d < len; d++) {
        ll cntNums = 9 * pow(10, d - 1);
        ll end = pow(10, d) - 1;
        totalSum += digitSumRange(pow(10, d - 1), end);
    }
    totalSum += digitSumRange(start, num - 1);

    // num সংখ্যার মধ্যে শুধু প্রথম digitIndex+1 টা digit যোগ করতে হবে
    string s = to_string(num);
    for (int i = 0; i <= digitIndex; i++) {
        totalSum += (s[i] - '0');
    }

    cout << totalSum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--) {
        Basar();
    }
    return 0;
}
