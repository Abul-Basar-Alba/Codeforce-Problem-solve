
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll res = 0,i=0,j=0;
       while(i<n&&j<n)
       {
           if(a[i]<=b[j])
           {
               a.pop_back();
               i++;
               j++;
           }
           else
            j++;
       }
        cout << a.size()<< endl;
    }

    return 0;
}
*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cu= 0;
        for (char c : s)
        {
            if (c == 'U')
            {
                cu++;
            }
        }
        if (cu% 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        ll k;
        cin >> n >> k; // Number of distinct types of cards and the number of coins

        vector<ll> cards(n);
        for (int i = 0; i < n; ++i) {
            cin >> cards[i]; // Number of cards of each type
        }

        // Calculate how many additional cards of each type can be bought
        vector<ll> additional_cards;
        for (int i = 0; i < n; ++i) {
            additional_cards.push_back(min(k, cards[i]));
            k -= additional_cards[i];
        }

        // Rearrange the cards to maximize the score
        ll score = 0;
        for (int i = 0; i < n; ++i) {
            ll min_cards = min(cards[i], additional_cards[i]);
            score += min_cards * (min_cards + 1) / 2; // Calculate score for each type of card
            cards[i] -= min_cards;
            if (i > 0) {
                ll common_cards = min(cards[i], additional_cards[i - 1]);
                score += common_cards; // Score for subarrays between different types of cards
                cards[i] -= common_cards;
            }
        }

        cout << score << endl;
    }

    return 0;
}
