//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//	ll t;
//	cin>>t;
//	while(t--)
//    {
//        string s;
//        cin>>s;
//        if(s[0]=='1'&&s[1]=='0'&&s[2]=='1'&&s.size()==3)
//            cout<<"NO\n";
//        else if(s[0]=='1'&&s[1]=='0'&&s[2]!='0'&&s.size()>=3)
//            cout<<"YES\n";
//        else
//            cout<<"No\n";
//
//    }
//}
//



//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    ll t;
//    cin >> t;
//
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//
//        vector<ll> v(n);
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> v[i];
//        }
//
//        set<ll> s;
//        bool ok = true;
//
//        for (int i = 0; i < n; ++i)
//        {
//            ll x = v[i];
//
//            if (i == 0)
//            {
//                s.insert(x);
//            }
//            else
//            {
//                if (s.find(x - 1) != s.end() || s.find(x + 1) != s.end())
//                {
//                    s.insert(x);
//                }
//                else
//                {
//                    ok = false;
//                    break;
//                }
//            }
//        }
//
//        if (ok)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//
//    return 0;
//}

//C

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    ll t;
//    cin >> t;
//
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//
//        vector<ll> a(n);
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> a[i];
//        }
//
//        ll m;
//        cin >> m;
//
//        while (m--)
//        {
//            string s;
//            cin >> s;
//
//            if (s.length() != n)
//            {
//                cout << "NO\n";
//                continue;
//            }
//
//            map<int, char> num_to_char;
//            map<char, int> char_to_num;
//            bool ok = true;
//
//            for (int i = 0; i < n; ++i)
//            {
//                int num = a[i];
//                char ch = s[i];
//
//                if (num_to_char.find(num) != num_to_char.end())
//                {
//                    if (num_to_char[num] != ch)
//                    {
//                        ok = false;
//                        break;
//                    }
//                }
//                else
//                {
//                    num_to_char[num] = ch;
//                }
//
//                if (char_to_num.find(ch) != char_to_num.end())
//                {
//                    if (char_to_num[ch] != num)
//                    {
//                        ok = false;
//                        break;
//                    }
//                }
//                else
//                {
//                    char_to_num[ch] = num;
//                }
//            }
//
//            if (ok)
//            {
//                cout << "YES\n";
//            }
//            else
//            {
//                cout << "NO\n";
//            }
//        }
//    }
//
//    return 0;
//}
//

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        string s;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cin >> s;

        ll pre[n+2];
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }

        ll sum = 0;

        ll x = 0;
        ll inl=-1,inr=-1,f=0;
        ll l=0,r=n-1;
        while(l<=r)
        {
           if(s[l]=='L')
            {
              inl=l;
            }
           else if(s[l]!='L')
            l++;
            if (s[r] == 'R'&&inl!=-1)
            {
                inr=r;
                if(inl==0)
                sum+=pre[inr];
                else
                {
                    sum+=pre[inr]-pre[inl-1];
                }
                inr=-1;
                inl=-1;
               r--;
               l++;
            }
            else if(s[r]!='R')
                r--;
        }

        cout << sum << "\n";
    }

    return 0;
}

//C

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//
//    ll t;
//    cin >> t;
//
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//        vector<ll> a(n);
//        for (int i = 0; i < n; i++)
//            cin >> a[i];
//
//        ll m;
//        cin >> m;
//
//        while (m--)
//        {
//            string s;
//            cin >> s;
//            if (s.size() != n)
//            {
//                cout << "NO\n";
//                continue;
//            }
//
//            map<char, ll> ch_num;
//            map<ll, char> num_ch;
//            bool ok = true;
//
//            for (int i = 0; i < n; i++)
//            {
//                char ch = s[i];
//                ll num = a[i];
//
//                if (ch_num.find(ch) == ch_num.end())
//                    ch_num[ch] = num;
//                else if (ch_num[ch] != num)
//                {
//                    ok = false;
//                    break;
//                }
//
//                if (num_ch.find(num) == num_ch.end())
//                    num_ch[num] = ch;
//                else if (num_ch[num] != ch)
//                {
//                    ok = false;
//                    break;
//                }
//            }
//
//            if (ok)
//                cout << "YES\n";
//            else
//                cout << "NO\n";
//        }
//    }
//
//    return 0;
//}
