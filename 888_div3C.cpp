//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n,k;
//        cin>>n>>k;
//        ll a[n+2];
//        for(int i=0;i<n;i++)
//            cin>>a[i];
//        ll c1=0,c2=0;
//        for(int i=0;i<n;i++)
//        {
//            if(a[0]==a[i])
//                c1++;
//            if(a[n-1]==a[i])
//                c2++;
//        }
//        ll f=1;
//        if(c1<k||c2<k)
//            cout<<"NO\n";
//        else
//        {
//          for(int i=1;i<n;i++)
//          {
//              if(f>=k)
//                break;
//              if(a[0]==a[i])
//                f++;
//              else if(a[n-1]==a[i])
//                c2--;
//          }
//          if(c2>=k)
//            cout<<"YES\n";
//          else
//            cout<<"NO\n";
//        }
//    }
//
//
//}


#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, K;
        cin >> A >> B >> K;

        vector<int> dp(B + 1, INT_MAX);
        dp[A] = 0;

        queue<int> q;
        q.push(A);

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            if (current == B) break;

            if (current + 1 <= B && dp[current + 1] == INT_MAX) {
                dp[current + 1] = dp[current] + 1;
                q.push(current + 1);
            }

            if (K != 0 && (ll)current * K <= B && dp[current * K] == INT_MAX) {
                dp[current * K] = dp[current] + 1;
                q.push(current * K);
            }
        }

        if (dp[B] == INT_MAX) cout << "-1" << endl;
        else cout << dp[B] << endl;
    }

    return 0;
}
