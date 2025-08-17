/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        string s="";
        for(int i=0;i<n;i++)
        {
             if(s1[i+1]=='1'&&s2[i]=='0')
                s+=s2[i];
            else if(s1[i+1]=='1'&&s2[i]=='1'||s1[i+1]=='0'&&s2[i]=='0')
                s+=s1[i];
        }
        cout<<s<<endl;
    }
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        ll n;
        cin>>n;
        ll a[n+2];
        set<ll>s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        cout<<s.size()<<endl;
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
     cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        int max_val= INT_MIN;

        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n;j++)
            {
                for (int k = 0; k < n;k++)
                {
                    for (int l = 0; l < n;l++)
                    {
                        if (i != j && i != k && i != l && j != k && j != l && k != l)
                        {
                            int val= abs(a[i] - a[j]) + abs(a[j] - a[k]) + abs(a[k] - a[l]) + abs(a[l] - a[i]);
                            max_val= max(max_val, val);
                        }
                    }
                }
            }
        }

        cout << max_val<< endl;
    }

    return 0;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
     cin>>t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }

        int max1 = INT_MIN, max2 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int i = 0; i < n;i++)
        {
            if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
            }
           else if (arr[i] > max2)
            {
                max2 = arr[i];
            }

            if (arr[i] < min1)
            {
                min2 = min1;
                min1 = arr[i];
            }
            else if (arr[i] < min2)
            {
                min2 = arr[i];
            }
        }
        cout <<max1<<' '<<min2<<' '<<max2<<' '<<min1<< endl;

        cout << 2 * (max1 - min2 + max2 - min1) << endl;
    }

    return 0;
}
